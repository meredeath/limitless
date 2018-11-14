all: arguments.o
	gcc -o arguments.o
arguments.o: arguments.c
	gcc -c arguments.c
run:
	./a.out
