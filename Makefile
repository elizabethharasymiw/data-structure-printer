CXX         := clang++
CXXFLAGS    := -Wall -Werror -std=c++14 -I include
SRC_DIR     := src
INCLUDE_DIR := include

phony_target: my_program tests

run: phony_target
	./my_program

test:
	./tests

my_program: $(SRC_DIR)/main.o $(SRC_DIR)/tree.o $(SRC_DIR)/list.o
	$(CXX) $(CXXFLAGS) $(SRC_DIR)/main.o $(SRC_DIR)/tree.o $(SRC_DIR)/list.o -o my_program

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

clean:
	rm $(SRC_DIR)/*.o my_program tests
