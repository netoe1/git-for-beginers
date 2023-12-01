
#dot.o files

#scripts.o: ./src/scripts.c
#	gcc -c ./src/scripts.c -o ./bin/lib/scripts

functions.o: ./src/functions.c ./src/functions.h ./bin/lib/scripts 
	gcc -o./bin/lib/functions -c ./src/functions.c 

cli.o: ./src/cli.h ./src/cli.c
	gcc -o ./src/cli.h ./src/cli.c

main.o: ./src/main.c
	gcc -o ./bin/linux/main ./src/main.c ./bin/lib/functions ./bin/lib/cli

linux_all:
	gcc -o ./bin/linux/gitBeginner ./src/cli.c ./src/functions.c ./src/main.c

windows32_all:
	i686-w64-mingw32-gcc -o ./bin/windows/32bits/gitBeginner ./src/cli.c ./src/functions.c ./src/main.c

windows64_all:
	x86_64-w64-mingw32-gcc -o ./bin/windows/64bits/gitBeginner ./src/cli.c ./src/functions.c ./src/main.c
all:
	make linux_all windows32_all windows64_all
clean_all:
	rm -rf ./bin/lib/*
	rm -rf ./bin/linux/*
