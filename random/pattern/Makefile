main.o: main.c
	gcc -c -g main.c

pattern.o: pattern.c
	gcc -c -g pattern.c

pattern: main.o pattern.o
	gcc -o pattern pattern.o main.o

run: pattern
	./pattern

debug: pattern
	gdb pattern

clean:
	rm pattern
	rm main.o
	rm pattern.o