main.o: main.c
	gcc -c main.c

pattern.o: pattern.c
	gcc -c pattern.c

pattern: main.o pattern.o
	gcc -o pattern pattern.o main.o

run: pattern
	./pattern

clean:
	rm pattern
	rm main.o
	rm pattern.o