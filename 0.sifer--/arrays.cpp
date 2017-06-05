/*
 Sifer Aseph
 arrays
 */

#include <iostream>

void simpleArrayTest1();
void simpleArrayTest2();

int main() {
    
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

void simpleArrayTest2() {
    int ar[10];
    
    for (int k = 3; k <= 7; ++k) {
        ar[k] = 3 * k + 4;
        std::cout << ar[k] << std::endl;
    }
}
