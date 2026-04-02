APP = ./app
BIN = ./bin
INCLUDE = ./include
BUILD = ./build
SRC = ./src
FLAGS = -Wall -Werror 

all: \
    libeb \
	myapps

libeb: \
    $(BUILD)/egg.o \
	$(BUILD)/list.o

myapps: \
	cleanapp \
	$(BIN)/app

$(BUILD)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc $(FLAGS) -c $< -I $(INCLUDE) -o $@

$(BIN)/%: $(APP)/%.c
	gcc $(FLAGS) $< $(BUILD)/*.o -I $(INCLUDE) -o $@

run:
	$(BIN)/app

clean:
	rm -rf $(BIN)/* $(BUILD)/*

cleanapp:
	rm -rf $(BIN)/*