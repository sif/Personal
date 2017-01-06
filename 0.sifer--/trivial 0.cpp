//  Sifer Aseph
//  Trivial on Xcode

#include <iostream>
#include <stdlib.h> // for rand()
#include <string>
#include <fstream> // for file handling
#include <math.h>

// STL
#include <vector>
#include <list>
#include <stack>

int collatzConjecture(int number);
void simpleLogicTest();
void simpleArrayTest1();
void justPlayingAround();

int main() {
    // arithmetic operators
    
    // simple array test 2
    int ar[10];
    
    for (int k = 3; k <= 7; ++k) {
        ar[k] = 3 * k + 4;
        std::cout << ar[k] << std::endl;
    }
    
    // simple even / odd number test
    std::cout << "Enter a number to test: ";
    int test = 0;
    std::cin >> test;
    
    if (test % 2 == 0) {
        std::cout << "This is an even number." << std::endl;
        
    } else {
        std::cout << "This is an odd number." << std::endl;
    }
    
    //
    int number = rand()%100;
    int guess = -1;
    int tryCount = 0;
    
    while (guess != number && tryCount < 8) {
        std::cout << number << std::endl;
        std::cout << "Please enter a guess: " << std::endl;
        std::cin >> guess;
        
        if (guess < number) {
            std::cout << "Too low" << std::endl;
        }
        
        if (guess > number) {
            std::cout << "Too high" << std::endl;
        }
        
        tryCount++;
    }
    
    if (guess == number) {
        std::cout << "You got it" << std::endl;
    } else {
        std::cout << "Sorry, the number was: " << number << std::endl;
    }
    
    //
    std::stack<int> myStack;
    
    // counting words from a file stream:
    std::string line;
    
    int lineCount = 0;
    while (ifs >> line) {
        lineCsount++;
    }
    
    //
    while (ifs) {
        getline(ifs, line);
        std::cout << line;
    }
    
    //
    
    return 0;
}

int collatzConjecture(int number) { // undecidable algorithm
    if (number == 1) {
        return 0;
    }
    
    if (number % 2 == 0) { // even
        return number / 2;
    }
    
    if (number % 2 != 0) { // odd
        return 3 * number + 1;
    }
}

void simpleLogicTest() {
    int x = 4;
    int y = 9;
    
    if (x > 0 && y != 2) std::cout << "yes" << std::endl; else std::cout << "no" << std::endl;
    if (x < 0 || y != 2) std::cout << "yes" << std::endl; else std::cout << "no" << std::endl;
    if (!(y < 10)) std::cout << "yes" << std::endl; else std::cout <<"no" << std::endl;
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

void justPlayingAround() {
    int mul = 0;
    
    while (mul < 30) {
        // Comment out one line at a time to decrement in times table.
        mul += 3; // 3 times table
        mul += 3; // 6 times table
        mul += 3; // 9 times table
        mul += 3; // 12 times table
        std::cout << mul << std::endl;
    }
}

/* Everything else:
 // temperature conversion
 // fahrenheit = (celsius * 9/5) + 32;
 
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
 */

/*
 Quote of the Code
 
 "Linux poses a real challenge for those with a taste for late-night hacking (and/or conversations with God)."
 Matt Welsh
 */
