APP = ./app
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src
FLAGS = -Wall -Werror 

all: \
    libeb \
	myapps

libeb: \
    $(OBJ)/egg.o \
	$(OBJ)/list.o

myapps: \
	cleanapp \
	$(BIN)/app

$(OBJ)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc $(FLAGS) -c $< -I $(INCLUDE) -o $@

$(BIN)/%: $(APP)/%.c
	gcc $(FLAGS) $< $(OBJ)/*.o -I $(INCLUDE) -o $@

run:
	$(BIN)/app

clean:
	rm -rf $(BIN)/* $(OBJ)/*

cleanapp:
	rm -rf $(BIN)/*