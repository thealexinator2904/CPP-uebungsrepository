CFLAGS = -g -Wall -I include
CC = g++
LIBS = -lstdc++

all: main

init: 
	mkdir -p build

Quadrantenrechner.o: include/Quadrantenrechner.h src/Quadrantenrechner.cpp
	$(CC) $(CFLAGS) -c src/Quadrantenrechner.cpp -o build/Quadrantenrechner.o
	
main.o: src/main.cpp
	$(CC) $(CFLAGS) -c src/main.cpp -o build/main.o
	
main: init Quadrantenrechner.o main.o
	$(CC) build/Quadrantenrechner.o build/main.o -o build/Quadrantenrechner $(LIBS)

clean:
	rm -rf build/
