main.o:	main.c
	gcc -c main.c

list.o: list.c
	gcc -c list.c

price.o: price.c
	gcc -c price.c 	

booksPriceList: list.o price.o main.o
	gcc -o booksPriceList price.o list.c main.c

run: booksPriceList
	./booksPriceList
