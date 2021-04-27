CC			= g++
CFLAGS	 	= -Wall -Wextra -std=c++11

BINDIR		= bin
BIN			= $(BINDIR)/main

SRC			= ./src
OBJ			= ./obj
SRCS		= $(wildcard $(SRC)/*.cpp)
OBJS		= $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $? -o $@

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -r $(OBJS) $(BIN)