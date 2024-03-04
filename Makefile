CXX := clang++

my_program: main.o tree.o list.o
	$(CXX) main.o tree.o list.o -o my_program

main.o: main.cpp
	$(CXX) -c main.cpp

tree.o: tree.cpp tree.hpp
	$(CXX) -c tree.cpp

list.o: list.cpp list.hpp
	$(CXX) -c list.cpp

clean:
	rm *.o my_program
