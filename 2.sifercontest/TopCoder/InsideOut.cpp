/*
 Sifer Aseph
 TopCoder: InsideOut
 https://community.topcoder.com/stat?c=problem_statement&pm=3452
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

class InsideOut {
public:
    std::string unscramble(std::string line) {
        size_t mid = line.length()/2;
        std::string combined = "";
        
        for (int i = mid-1; i >= 0; --i) { // left
            combined += line[i];
        }
        
        for (int j = line.size(); j >= mid; --j) {
            combined += line[j];
        }
        
        return combined;
    }
    
private:

};

int main() {
    InsideOut test;

    std::cout << test.unscramble("I ENIL SIHTHSIREBBIG S") << std::endl; // should return "THIS LINE IS GIBBERISH"
    std::cout << test.unscramble("LEVELKAYAK") << std::endl; // "LEVELKAYAK"
    
    return 0;
}
