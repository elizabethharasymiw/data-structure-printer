CXX         := g++
CXXFLAGS    := -Wall -Werror -std=c++14 -I include
SRC_DIR     := src
INCLUDE_DIR := include

target: my_program tests

run: target
	./my_program

test: target
	./tests

# Warning: This can take while
format:
	clang-format -i --style=file $(INCLUDE_DIR)/*.hpp
	clang-format -i --style=file $(SRC_DIR)/*.cpp

test-format:
	clang-format --dry-run -Werror -style=file ./include/*.hpp
	clang-format --dry-run -Werror -style=file ./src/*.cpp

my_program: $(SRC_DIR)/main.o $(SRC_DIR)/tree.o $(SRC_DIR)/list.o $(SRC_DIR)/menu.o
	$(CXX) $(CXXFLAGS) $(SRC_DIR)/main.o $(SRC_DIR)/tree.o $(SRC_DIR)/list.o $(SRC_DIR)/menu.o -o my_program

tests: $(SRC_DIR)/all_tests.o $(SRC_DIR)/catch_amalgamated.o $(SRC_DIR)/list.o $(SRC_DIR)/tree.o $(SRC_DIR)/test_support.o
	$(CXX) $(CXXFLAGS) $(SRC_DIR)/all_tests.o $(SRC_DIR)/catch_amalgamated.o $(SRC_DIR)/list.o $(SRC_DIR)/tree.o $(SRC_DIR)/test_support.o -o tests

test_support.o: $(SRC_DIR)/test_support.cpp $(INCLUDE_DIR)/test_support.hpp
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/test_support.cpp

main.o: $(SRC_DIR)/main.cpp
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/main.cpp

catch_amalgamated.o: $(SRC_DIR)/catch_amalgamated.cpp $(INCLUDE_DIR)/catch_amalgamated.hpp
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/catch_amalgamated.cpp

tree.o: $(SRC_DIR)/tree.cpp $(INCLUDE_DIR)/tree.hpp
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/tree.cpp

list.o: $(SRC_DIR)/list.cpp $(INCLUDE_DIR)/list.hpp
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/list.cpp

menu.o: $(SRC_DIR)/menu.cpp $(INCLUDE_DIR)/menu.hpp
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/menu.cpp

clean:
	rm $(SRC_DIR)/*.o my_program tests
