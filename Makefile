my_program: main.o tree.o list.o
	clang++ main.o tree.o list.o -o my_program

main.o: main.cpp
	clang++ -c main.cpp

tree.o: tree.cpp tree.hpp
	clang++ -c tree.cpp

list.o: list.cpp list.hpp
	clang++ -c list.cpp
