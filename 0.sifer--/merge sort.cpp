/*
 Sifer Aseph
 Merge Sort
 */

#include <iostream>
#include <vector>

std::vector<int> mergeSort(std::vector<int> &theList) {
    
    
    return theList;
}

int main() {
    std::vector<int> tastyPie;
    tastyPie.push_back(59);
    tastyPie.push_back(26);
    tastyPie.push_back(41);
    tastyPie.push_back(58);
    tastyPie.push_back(0);
    tastyPie.push_back(3);
    tastyPie.push_back(53);
    tastyPie.push_back(97);
    tastyPie.push_back(93);
    tastyPie.push_back(1);
    
    for (int i = 0; i < tastyPie.size(); ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\nMerge sorting in progress." << std::endl;
    mergeSort(tastyPie);
    
    for (int i = 0; i < tastyPie.size(); ++i) {
        std::cout << tastyPie[i] << " ";
    }
    
    std::cout << "\n";
    
    return 0;
}
