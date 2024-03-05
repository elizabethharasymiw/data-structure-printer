CXX := clang++
CXXFLAGS := -Wall -Werror -std=c++11

my_program: main.o tree.o list.o
	$(CXX) $(CXXFLAGS) main.o tree.o list.o -o my_program

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

tree.o: tree.cpp tree.hpp
	$(CXX) $(CXXFLAGS) -c tree.cpp

list.o: list.cpp list.hpp
	$(CXX) $(CXXFLAGS) -c list.cpp

clean:
	rm *.o my_program
