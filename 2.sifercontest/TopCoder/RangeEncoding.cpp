// Sifer Aseph
// TopCoder: RangeEncoding
// https://community.topcoder.com/stat?c=problem_statement&pm=14592

#include <iostream>
#include <vector>
#include <set>

class RangeEncoding {
public:
    int minRanges(std::vector<int>& arr) {
        if (arr.size() == 0) {
            return 0;
        }
        
        if (arr.size() == 1) {
            return 1;
        }
        
        int setSize = 0;
        std::vector<std::set<int>> wholeSet;
        
        for (int i = 0; i < arr.size(); ++i) {
            if ((arr[i+1] - arr[i]) == 1 || (arr[i+1] - arr[i]) == 0) {
                std::set<int> aSet;
                aSet.insert(arr[i]);
            }
                
            if ((arr[i+1] - arr[i]) != 1 && (arr[i+1] - arr[i]) != 0) {
                ++setSize;
            }
        }

        return wholeSet.size() + setSize;
    }
};

int main() {
    RangeEncoding example;
    
    std::vector<int> test0 = {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> test1 = {1,2};
    std::vector<int> test2 = {1,6,10,20,32,49};
    std::vector<int> test3 = {33,33};
    std::vector<int> test4 = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    
    std::cout << example.minRanges(test0) << std::endl;
    std::cout << example.minRanges(test1) << std::endl;
    std::cout << example.minRanges(test2) << std::endl;
    std::cout << example.minRanges(test3) << std::endl;
    std::cout << example.minRanges(test4) << std::endl;
    
    return 0;
}
