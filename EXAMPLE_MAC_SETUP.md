# How to get setup and use the print-data-cpp project on Mac OS

## Required Tools
- Homebrew
- LLVM Clang 15
- clang-format

## Step-by-Step Instructions
```
# Install homebrew 
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# Install LLVM Clang
brew install llvm@15

# Add this command to your shell profile file (~/.bash_profile, ~/.zshrc, etc) 
# to make using LLVM Clang your computers default on startup. 
# This command adds the LLVM binaries to the beginning of your PATH.
export PATH="/usr/local/opt/llvm@15/bin:$PATH"

# Install clang-format using homebrew
brew install clang-format

```

## Building
```

# Compile program using llvm compiler
clang++ -std=c++11 -o my_program main.cpp tree.cpp list.cpp

```

## Running
```
./my_program
```
