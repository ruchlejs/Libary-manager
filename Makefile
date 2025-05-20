C = g++
CFLAGS = -Wall -std=c++11
OBJ_DIR = obj
SRC_DIR = src

all: $(OBJ_DIR) main

main: $(OBJ_DIR)/main.o $(OBJ_DIR)/library.o $(OBJ_DIR)/book.o $(OBJ_DIR)/media.o $(OBJ_DIR)/film.o
	$(C) $(CFLAGS) $(OBJ_DIR)/main.o $(OBJ_DIR)/library.o $(OBJ_DIR)/book.o $(OBJ_DIR)/media.o $(OBJ_DIR)/film.o -o main

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(C) $(CFLAGS) -c $(SRC_DIR)/main.cpp -o $(OBJ_DIR)/main.o

$(OBJ_DIR)/library.o: $(SRC_DIR)/Library.cpp
	$(C) $(CFLAGS) -c $(SRC_DIR)/Library.cpp -o $(OBJ_DIR)/library.o

$(OBJ_DIR)/book.o: $(SRC_DIR)/Book.cpp
	$(C) $(CFLAGS) -c $(SRC_DIR)/Book.cpp -o $(OBJ_DIR)/book.o

$(OBJ_DIR)/media.o: $(SRC_DIR)/Media.cpp
	$(C) $(CFLAGS) -c $(SRC_DIR)/Media.cpp -o $(OBJ_DIR)/media.o

$(OBJ_DIR)/film.o: $(SRC_DIR)/Film.cpp
	$(C) $(CFLAGS) -c $(SRC_DIR)/Film.cpp -o $(OBJ_DIR)/film.o



$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR) main