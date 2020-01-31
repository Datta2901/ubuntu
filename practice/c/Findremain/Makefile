main.o: main.c
	gcc -c main.c

remain.o: remain.c	
	gcc -c remain.c

find: remain.o main.o
	gcc -o find remain.o main.o

run: find
	./find

