# print-data-cpp
Collection of print functions to help with visualizing data structures you are debugging

## Building
```
# Compile list.cpp to create object file list.o
g++ -c list.cpp -o list.o

# Compile tree.cpp to create object file tree.o
g++ -c tree.cpp -o tree.o

# Compile main.cpp to create object file main.o
g++ -c main.cpp -o main.o

# Link the object files to create the executable program (e.g., my_program)
g++ list.o tree.o main.o -o my_program
```

## Running
```
./my_program
```
