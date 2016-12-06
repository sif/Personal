/*
 Sifer Aseph
 Random Number Generator
 */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

int main() {
    std::vector<int> tastyPie;
    srand(std::time(nullptr));
    int aNumber = 0;
    for (int tenNumbers = 0; tenNumbers < 10; ++tenNumbers) {
        aNumber = rand() & 1000;
        tastyPie.push_back(aNumber);
    }
    
    for (int i = 0; i < tastyPie.size(); ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\n[Some function] in progress." << std::endl;
    
    for (int i = 0; i < tastyPie.size(); ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\n";
    
    return 0;
}

/*
 Quote of the Code
 
 We the Users, in order to form a more perfect system, establish priorities,
 ensure connective tranquility, provide for common repairs, promote
 preventive maintenance, and secure the blessings of liberty for ourselves
 and our processes, do ordain and establish this Software of The Unixed States
 of America.
 */
