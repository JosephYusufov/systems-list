ifeq ($(DEBUG),true)
	CC = gcc -g
else
	CC = gcc
endif

all: list.o main.o
	$(CC) -o program main.o list.o

main.o: main.c list.h
	$(CC) -c main.c

list.o: list.c
	$(CC) -c list.c

run:
	./program

clean:
	rm *.o
	rm *~

memcheck:
	valgrind --leak-check=yes ./program
