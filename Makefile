C = g++
CFLAGS = -Wall -std=c++11

all:main

main: main.o library.o book.o
	$(C) $(CFLAGS) main.o library.o book.o -o main

main.o: main.cpp
	$(C) $(CFLAGS) -c main.cpp -o main.o

library.o: Library.cpp
	$(C) $(CFLAGS) -c Library.cpp -o library.o

book.o: Book.cpp
	$(C) $(CFLAGS) -c Book.cpp -o book.o

clean:
	rm -f main *.o