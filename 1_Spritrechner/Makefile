CFLAGS = -g -Wall -I include
CC = g++
LIBS = -lstdc++

all: main

init: 
	mkdir -p build

Spritrechner.o: src/Spritrechner.cpp include/Spritrechner.h
	$(CC) $(CFLAGS) -c src/Spritrechner.cpp -o build/Spritrechner.o
	
main.o: src/main.cpp
	$(CC) $(CFLAGS) -c src/main.cpp -o build/main.o
	
main: init Spritrechner.o main.o
	$(CC) build/Spritrechner.o build/main.o -o build/Spritrechner $(LIBS)
	
clean:
	rm -rf build/
