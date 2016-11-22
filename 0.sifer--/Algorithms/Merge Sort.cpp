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

void merge(int *, int, int, int);

void mergeSort(int *theList, int low, int high) {
    int mid;
    
    if (low < high) {
        mid = (low + high) / 2;
        mergeSort(theList, low, mid);
        mergeSort(theList, mid+1, high);
        merge(theList, low, high, mid);
    }
    
    return;
}

void merge(int *theList, int low, int high, int mid) {
    int lowIndex, midIndex, highIndex, newList[20];
    midIndex = mid + 1;
    lowIndex = low;
    highIndex = low;
    
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
    int tastyPie[20];
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
    mergeSort(tastyPie, 0, 10);
    
    for (int i = 0; i < 10; ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\n";
    
    return 0;
}
