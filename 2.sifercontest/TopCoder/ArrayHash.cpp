/*
 Sifer Aseph
 TopCoder: ArrayHash
 https://community.topcoder.com/stat?c=problem_statement&pm=4503
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <map>

class ArrayHash {
public:
    int valueArray(char key) { // Ayush's idea, really nice, was going to do it the hard way via map or enum
        if (key > 90) {
            return key-97;
        }
        
        return key-65;
    }
    
    int getHash(std::vector<std::string> input) {
        // Value = (Alphabet Position) + (Element of input) + (Position in Element)
        value = 0;
        for (int i = 0; i < input.size(); ++i) {
            std::string alphabetPosition = input[i];
            
            for (int j = 0; j < alphabetPosition.length(); ++j) {
                value += j;
                value += i;
            }
            
            for (int k = 0; k < alphabetPosition.length(); ++k) {
                char omgreally = alphabetPosition[k];
                value += valueArray(omgreally);
            }
        }
        
        return value;
    }
    
private:
    int value = 0;
};

int main() {
    ArrayHash test;

    std::cout << test.getHash({"CBA", "DDD"}) << std::endl; // should return 21
    std::cout << test.getHash({"Z"}) << std::endl; // 25
    std::cout << test.getHash({"ABCDEFGHIJKLMNOPQRSTUVWXYZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"}) << std::endl; // 4290
    
    return 0;
}
