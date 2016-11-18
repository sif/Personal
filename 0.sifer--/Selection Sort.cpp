/*
 Sifer Aseph
 Selection Sort
 2.2-2
 
 The pseudocode:
 selectionSort(array[n]):
 1. Find the smallest element in the list first then putting it into A[0].
 2. Find the second smallest element in the list then putting it into A[1].
 3. Continue until n-1 is reached.
 4. Return array.
 */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

std::vector<int> selectionSort(std::vector<int> &theList) {
    for (int i = 0; i < theList.size(); ++i) {
        
    }
    
    return theList;
}

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
    
    std::cout << "\nSelection sorting in progress." << std::endl;
    selectionSort(tastyPie);
    
    for (int i = 0; i < tastyPie.size(); ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\n";
    
    return 0;
}
