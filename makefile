SRC := codeforces.cpp

# file i/o
IN  := input.txt

CXX := g++

# use "Clang++20 Diagnostics" compiler
CXXFLAGS := -Wall					\
			-Wextra					\
			-pipe					\
			-std=gnu++20

BIN := out.elf64


all: build run


build:
	@printf "Compile...\n"
	@touch $(IN)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(BIN)

run:
	@printf "\nRun:\n./$(BIN)\n"
	@touch $(IN)
	@\time -f '\n\nexec time: %e' ./$(BIN) < $(IN)


clean:
	rm -rf $(BIN) $(IN)
	touch $(IN)
