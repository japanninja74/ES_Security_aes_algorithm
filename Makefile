main: main.o aes.o
	gcc -Wall main.o aes.o -lm -o main

main.o: main.c aes.h
	gcc -c -Wall main.c aes.h

aes: aes.o 
	gcc -Wall aes.o -lm

aes.o : aes.c aes.h
	gcc -c -Wall aes.c aes.h

clean: 
	rm -f *.o main
