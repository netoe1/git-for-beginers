main.o: ./src/main.c
	gcc -o ./main ./src/main.c

makeAnRun:./src/main.c
	gcc -o ./bin/main ./src/main.c
	./bin/main