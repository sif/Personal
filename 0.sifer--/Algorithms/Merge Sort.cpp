/*
 Sifer Aseph
 Merge Sort
 
 Best-case:
 Worst-case:
 */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void merge(int *, int, int, int);

void mergeSort(int *theList, int low, int high) {
    int mid;
    
    if (low < high) { // base case check
        mid = floor((low + high) / 2); // divide
        mergeSort(theList, low, mid); // conquer
        mergeSort(theList, mid+1, high); // conquer
        merge(theList, low, mid, high); // conquer
    }
}

void merge(int *theList, int low, int mid, int high) {
    int lowIndex = low, midIndex = mid + 1, highIndex = low, newList[1000];
    
    while (lowIndex <= mid && midIndex <= high) {
        if (theList[lowIndex] < theList[midIndex]) {
            newList[highIndex] = theList[lowIndex];
            lowIndex++;
            highIndex++;
        } else {
            newList[highIndex] = theList[midIndex];
            midIndex++;
            highIndex++;
        }
        
        while (lowIndex <= mid) {
            newList[highIndex] = theList[lowIndex];
            lowIndex++;
            highIndex++;
        }
        
        while (midIndex <= high) {
            newList[highIndex] = theList[midIndex];
            midIndex++;
            highIndex++;
        }
        
        for (lowIndex = low; lowIndex < highIndex; ++lowIndex) {
            theList[lowIndex] = newList[lowIndex];
        }
    }
}

int main() {
    int tastyPie[10];
    srand(std::time(nullptr));
    int aNumber = 0;
    for (int tenNumbers = 0; tenNumbers < 10; ++tenNumbers) {
        aNumber = rand() & 1000;
        tastyPie[tenNumbers] = aNumber;
    }
    
    for (int i = 0; i < 10; ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\nMerge sorting in progress." << std::endl;
    mergeSort(tastyPie, 0, 9);
    
    for (int i = 0; i < 10; ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\n";
    
    return 0;
}

// dealing with some off by one issues here :(
