CC=gcc

SRC := src
OBJ := obj

SOURCES := $(wildcard $(SRC)/*.c)
OBJECTS := $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SOURCES))

trie_main: $(OBJECTS)
	$(CC) -g -Wall $^ -o $@ -lm

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) -g -I$(SRC) -c $< -o $@ -lm

clean:
	@rm -f trie_main ./obj/*.o core 