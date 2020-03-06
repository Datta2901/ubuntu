main.o: main.c
	gcc -c main.c

snug_fit.o: snug_fit.c
	gcc -c snug_fit.c

logic.o: logic.c
	gcc -c logic.c

execute: logic.o snug_fit.o main.o
	gcc -o execute logic.o snug_fit.o main.o

run: execute
	./execute