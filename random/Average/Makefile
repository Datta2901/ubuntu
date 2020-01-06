main.o: main.c
	gcc -c main.c 

average.o: average.c
	gcc -c average.c

total.o: total.c
	gcc -c total.c

function: total.o average.o main.o
	gcc -o function total.o average.o main.o

run: function
	./function