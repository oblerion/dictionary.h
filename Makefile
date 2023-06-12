all: main

main: dictionary.o main.o
	gcc dictionary.o main.o -o main
dictionary.o: src/dictionary.c
	gcc -c src/dictionary.c
main.o: src/main.c
	gcc -c src/main.c
clean:
	rm *.o
