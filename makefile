all: arguments.o
	gcc arguments.o -o test
arguments.o: arguments.c
	gcc arguments.c -c
run:
	./test
