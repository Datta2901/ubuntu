main.o: main.c
	gcc -c main.c 

utils.o: utils.c
	gcc -c utils.c

arrayUtils.o: arrayUtils.c
	gcc -c arrayUtils.c

printArray: main.o utils.o arrayUtils.o 
	gcc -o printArray arrayUtils.o utils.o main.o


run: printArray
	./printArray		

