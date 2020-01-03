main.o: main.c
	gcc -c main.c

counting.o: counting.c
	gcc -c counting.c

print.o: print.c
	gcc -c print.c

Count: print.o counting.o main.o
	gcc -o Count print.o counting.o main.o

run: Count
	./Count	
