CC = g++ #compiler
CFLAGS = -c -Wall #options pass to compiler

all: LinkedStack

LinkedStack: LinkedStack.o
	$(CC) LinkedStack.o -o LinkedStack

LinkedStack.o: LinkedStack.cpp
	$(CC) $(CFLAGS) LinkedStack.cpp

clean:
	rm *o LinkedStack