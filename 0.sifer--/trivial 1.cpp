//  Sifer Aseph
//  More Trivial on Xcode

#include <iostream>

void infiniteLoop();

int main() {
    
    
    return 0;
}

void infiniteLoop() {
    for (;;);
}

// Apparently this kind of commenting does not exist in C89. Had to fix that on all of my old code.
// cc1 is GCC's C compiler.
// Use: gcc -Wall -Wextra -ansi -pedantic stuff.c
// Fun fact: GCC used to be GNU C Compiler. It's now GNU Compiler Collection. It was created shortly after I was born.

// shallow copy vs deep copy

// Solution to finding the n smallest / n largest: sort the array.

// Fast inverse square root
// i  = 0x5f3759df - ( i >> 1 );
