CXX := clang++
CXXFLAGS := -Wall -Werror -std=c++14

phony_target: my_program tests

my_program: main.o tree.o list.o
	$(CXX) $(CXXFLAGS) main.o tree.o list.o -o my_program

tests: all_tests.o catch_amalgamated.o list.o test_support.o
	$(CXX) $(CXXFLAGS) all_tests.o catch_amalgamated.o list.o test_support.o -o tests

test_support.o: test_support.cpp test_support.hpp
	$(CXX) $(CXXFLAGS) -c test_support.cpp

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

catch_amalgamated.o: catch_amalgamated.cpp catch_amalgamated.hpp
	$(CXX) $(CXXFLAGS) -c catch_amalgamated.cpp

tree.o: tree.cpp tree.hpp
	$(CXX) $(CXXFLAGS) -c tree.cpp

list.o: list.cpp list.hpp
	$(CXX) $(CXXFLAGS) -c list.cpp

clean:
	rm *.o my_program tests
