main.o: main.c
	gcc -c main.c

search.o: search.c
	gcc -c search.c

linearSearch: search.o main.o 
	gcc -o linearSearch search.o main.o

run: linearSearch
	./linearSearch


