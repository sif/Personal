/*
 Sifer Aseph
 TopCoder: Soccer
 https://community.topcoder.com/stat?c=problem_statement&pm=1650
 */

#include <iostream>
#include <vector>

// win = 3 points
// tie = 1 point
// lose = 0 point

class Soccer {
public:
    int maxPoints(std::vector<int> wins, std::vector<int> ties) {
        std::vector<int> tally;
        for (int index = 0; index < wins.size(); ++index) {
            int first = 3 * wins[index];
            int second = 1 * ties[index];
            int third = first + second;
            tally.push_back(third);
        }
        
        
        for (int j = 0; j < tally.size(); ++j) {
            if (tally[j] > comp) {
                comp = tally[j];
            }
        }
        
        return comp;
    }
private:
    int comp = 0;
};

int main() {
    Soccer test;
    
    std::cout << test.maxPoints({1,4,3,0,0}, {3,1,5,3,1}) << std::endl; // should return 14
    std::cout << test.maxPoints({12,45,20,17,48,0}, {48,10,53,94,0,100}) << std::endl; // 145
    
    return 0;
}
