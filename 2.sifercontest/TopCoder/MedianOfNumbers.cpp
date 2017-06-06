/*
 Sifer Aseph
 TopCoder: MedianOfNumbers
 https://community.topcoder.com/stat?c=problem_statement&pm=6528
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

class MedianOfNumbers {
public:
    std::vector<int> sorting(std::vector<int> &numbers) {
        for (int i = 0; i <= numbers.size()-1; ++i) {
            int j = i;
            while ((j > 0) && (numbers[j-1] > numbers[j])) {
                int key = numbers[j];
                numbers[j] = numbers[j-1];
                numbers[j-1] = key;
                j = j-1;
            }
        }
        
        return numbers;
    }
    
    int findMedian(std::vector<int> numbers) {
        sorting(numbers);
        
        if (numbers.size() % 2 == 0) {
            return -1;
        }
        
        if (numbers.size() == 1) {
            return numbers[0];
        }
        
        size_t mid = numbers.size()/2;
        
        return numbers[mid];
    }
    
private:

};

int main() {
    MedianOfNumbers test;
    std::cout << test.findMedian({1, 4, 2, 5, 7}) << std::endl; // should return 4
    std::cout << test.findMedian({1, 5, 8, 3}) << std::endl; // -1
    std::cout << test.findMedian({7}) << std::endl; // 7
    std::cout << test.findMedian({32, 54, 27, 4, 69, 96, 73, 1, 100, 15, 21}) << std::endl; // 32
    
    return 0;
}
