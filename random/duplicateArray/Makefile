main.o: main.c
	gcc -c main.c

deleteArray.o: deleteArray.c
	gcc -c deleteArray.c

shift.o: shift.c
	gcc -c shift.c

Duplicate: shift.o deleteArray.o main.o
	gcc -o Duplicate shift.o deleteArray.o main.o

run: Duplicate
	./Duplicate		
