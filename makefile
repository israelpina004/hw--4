all: euler.o main.o
	gcc -o euler main.o euler.o

main.o: main.c euler.h
	gcc -c main.c

euler.o: euler.c euler.h
	gcc -c euler.c
