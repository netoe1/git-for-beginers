
#dot.o files

#scripts.o: ./src/scripts.c
#	gcc -c ./src/scripts.c -o ./bin/lib/scripts

functions.o: ./src/functions.c ./src/functions.h ./bin/lib/scripts 
	gcc -o./bin/lib/functions -c ./src/functions.c 

cli.o: ./src/cli.h ./src/cli.c
	gcc -o ./src/cli.h ./src/cli.c

main.o: ./src/main.c
	gcc -o ./bin/linux/main ./src/main.c ./bin/lib/functions ./bin/lib/cli

makeAndRun:./src/main.c
	gcc -o ./bin/main ./src/main.c
	./bin/main

makeForWindows32bits:./src/main.c
	i686-w64-mingw32-gcc -o ./bin/windows/main32.exe ./src/main.c

makeForWindows64bits:./src/main.c
	i686-w64-mingw32-gcc -o ./bin/windows/main.exe ./src/main.c

all:
	make makeForWindows32bits makeForWindows64bits main.o

linux_all:
	make scripts.o functions.o main.o
clean:
	rm -rf ./bin/lib/*.0
	rm -rf ./bin/linux/*.0