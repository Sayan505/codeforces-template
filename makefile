SRC := codeforces.cpp

IN  := input.txt

CXX := g++

CXXFLAGS := -O2						\
			-pipe					\
			-std=gnu++20

BIN := out.elf64




all: build run


build:
	@printf "Compile...\n"
	@touch $(IN)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(BIN)
	@printf "Compiled successfully!\n"

run:
	@printf "\nRun:\n./$(BIN)\n"
	@touch $(IN)
	@printf "====EXECUTION===================================================================\n"
	@\time -f '\n====END=========================================================================\nexec. time: %es' ./$(BIN) < $(IN)


clean:
	rm -rf $(BIN) $(IN)
	touch $(IN)
