main.o: ./src/main.c
	gcc -o ./bin/linux/main ./src/main.c

makeAndRun:./src/main.c
	gcc -o ./bin/main ./src/main.c
	./bin/main

makeForWindows32bits:./src/main.c
	i686-w64-mingw32-gcc -o ./bin/windows/main32.exe ./src/main.c

makeForWindows64bits:./src/main.c
	i686-w64-mingw32-gcc -o ./bin/windows/main.exe ./src/main.c

all:
	make makeForWindows32bits makeForWindows64bits main.o
