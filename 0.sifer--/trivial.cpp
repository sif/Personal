//  Sifer Aseph
//  Trivial on Xcode

#include <iostream>
#include <string>
#include <math.h>

#include <vector>
#include <list>

void simpleArrayTest1();

int main() {
    // arithmetic operators
    
    // simple array test 2
    int ar[10];
    
    for (int k = 3; k <= 7; ++k) {
        ar[k] = 3 * k + 4;
        std::cout << ar[k] << std::endl;
    }
    
    //
    
    
    return 0;
}

void simpleArrayTest1() {
    int n = 1;
    int arrayExample[n]; // 5 inputs to be printed out
    
    for (int i = 0; i < n; ++i) {
        std::cin >> arrayExample[i]; // equivalent to arrayExample[n] = a user inputs
    }
    
    for (int i = 0; i < n; ++i) {
        std:: cout << "Your input: " << arrayExample[i] << std::endl;
    }
}

/*
 // all things math (geometry, etc.)
 
 // all things random (Rock-Paper-Scissors, 3-sided coin toss, etc.)
 
 // ASCII generator
 
 system("pause");
 // Windows only
 
 // 0x2B | ~0x2B
 
 // Wastes will go to /dev/null.
 
 // Aleph-null bottles of beer on the wall,
 // Aleph-null bottles of beer,
 // You take one down, and pass it around,
 // Aleph-null bottles of beer on the wall.
 
 // I changed the lyric because my code counted down to zero, which somebody suggested that it's funny that I could tear down the wall. I fixed my code though.
 
 // 
 */

// Apparently this kind of commenting does not exist in C89. Had to fix that on all of my old code.
// cc1 is GCC's C compiler.
// Use: gcc -Wall -Wextra -ansi -pedantic stuff.c
// Fun fact: GCC used to be GNU C Compiler. It's now GNU Compiler Collection. It was created shortly after I was born.

// shallow copy vs deep copy

// Solution to finding the n smallest / n largest: sort the array.

// Fast inverse square root
// i  = 0x5f3759df - ( i >> 1 );

// 2038 is going to be a special year.
