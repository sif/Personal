/*
 Sifer Aseph
 TopCoder: KiloMan
 https://community.topcoder.com/stat?c=problem_statement&pm=2268
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <map>

class KiloMan {
public:
    int hitsTaken (std::vector<int> pattern, std::string jumps) {
        hits = 0;
        
        for (int i = 0; i < pattern.size(); ++i) {
            //std::cout << "index: " << i << std::endl;
            if (pattern[i] <= 2 && jumps[i] == 'S') {
                //std::cout << "first hit: " << i << std::endl;
                hits++;
            }
            
            if (pattern[i] > 2 && jumps[i] == 'J') {
                //std::cout << "second hit: " << i << std::endl;
                hits++;
            }
        }
        
        return hits;
    }
    
private:
    int hits = 0;
};

int main() {
    KiloMan test;

    std::cout << test.hitsTaken({1,3,2,3,3,1,2,2,1}, "JJSSSJSSJ") << std::endl; // should return 4
    std::cout << test.hitsTaken({1,1,1,1,1,1,1,2,2,2,2,2,2,2,3,3,3,3,3,3,3,4,4,4,4,4,4,4,5,5,5,5,5,5,5,6,6,6,6,6,6,6,7,7,7,7,7,7,7}, "SSSSSSSSSSSSSSJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ") << std::endl; // 49
    std::cout << test.hitsTaken({1,2,2,1}, "SJJS") << std::endl; // 2
    std::cout << test.hitsTaken({1}, "J") << std::endl; // 0
    
    return 0;
}
