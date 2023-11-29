
#dot.o files

scripts.o: ./src/scripts.c
	gcc -c ./src/scripts.c -o ./bin/lib/scripts

functions.o: ./src/functions.c ./include/functions.h
	gcc -o ./bin/lib/functions ./src/functions.c

main.o: ./src/main.c
	gcc -o ./bin/linux/main ./src/main.c ./bin/lib/scripts

#make ready
makeAndRun:./src/main.c
	gcc -o ./bin/main ./src/main.c
	./bin/main

makeForWindows32bits:./src/main.c
	i686-w64-mingw32-gcc -o ./bin/windows/main32.exe ./src/main.c

makeForWindows64bits:./src/main.c
	i686-w64-mingw32-gcc -o ./bin/windows/main.exe ./src/main.c

all:
	make makeForWindows32bits makeForWindows64bits main.o

linux_run:
	./bin/linux/main
clean:
	rm -rf ./bin/lib/*.0
	rm -rf ./bin/linux/*.0