C = g++
CFLAGS = -Wall -std=c++11
OBJ_DIR = obj

all: $(OBJ_DIR) main

main: $(OBJ_DIR)/main.o $(OBJ_DIR)/library.o $(OBJ_DIR)/book.o $(OBJ_DIR)/media.o $(OBJ_DIR)/film.o
	$(C) $(CFLAGS) $(OBJ_DIR)/main.o $(OBJ_DIR)/library.o $(OBJ_DIR)/book.o $(OBJ_DIR)/media.o $(OBJ_DIR)/film.o -o main

$(OBJ_DIR)/main.o: main.cpp
	$(C) $(CFLAGS) -c main.cpp -o $(OBJ_DIR)/main.o

$(OBJ_DIR)/library.o: Library.cpp
	$(C) $(CFLAGS) -c Library.cpp -o $(OBJ_DIR)/library.o

$(OBJ_DIR)/book.o: Book.cpp
	$(C) $(CFLAGS) -c Book.cpp -o $(OBJ_DIR)/book.o

$(OBJ_DIR)/media.o: Media.cpp
	$(C) $(CFLAGS) -c Media.cpp -o $(OBJ_DIR)/media.o

$(OBJ_DIR)/film.o  :Film.cpp
	$(C) $(CFLAGS) -c Film.cpp -o $(OBJ_DIR)/film.o



$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR) main