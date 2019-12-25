main.o:	main.c
	gcc -c main.c

roots.o: roots.c
	gcc -c roots.c

quadraticRoots: roots.o main.o
	gcc -o quadraticRoots roots.o main.o

run: quadraticRoots 
	./quadraticRoots		


