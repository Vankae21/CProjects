CC = gcc
CFLAGS = -Wall -Wextra -g

all: main

main: main.c util.h
	$(CC) $(CFLAGS) main.c -o main

clean:
	rm -f main
