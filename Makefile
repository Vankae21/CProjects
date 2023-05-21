CC = gcc
CFLAGS = -Wall -Wextra -g

all: main

main: main.o
	$(CC) $(CFLAGS) main.o -o main

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f main.exe main