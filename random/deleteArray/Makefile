main.o: main.c
	gcc -c main.c

delete.o: delete.c
	gcc -c delete.c

shifting.o:	shifting.c
	gcc -c shifting.c

ToDelete: shifting.o delete.o main.o
	gcc -o ToDelete shifting.o delete.o main.o

make run: ToDelete
	./ToDelete		

