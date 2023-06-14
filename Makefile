all: main

main: dictionary.o main.o
	gcc src/dictionary.o src/main.o -o main
dictionary.o: src/dictionary.c
	gcc -c src/dictionary.c -o src/dictionary.o
main.o: src/main.c
	gcc -c src/main.c -o src/main.o
clean:
	rm src/*.o
