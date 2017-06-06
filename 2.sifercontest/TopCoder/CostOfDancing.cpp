/*
 Sifer Aseph
 TopCoder: CostOfDancing
 https://community.topcoder.com/stat?c=problem_statement&pm=13195
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

class CostOfDancing {
public:
    std::vector<int> sorting(std::vector<int> &danceCost) {
        for (int i = 0; i <= danceCost.size()-1; ++i) {
            int j = i;
            while ((j > 0) && (danceCost[j-1] > danceCost[j])) {
                int key = danceCost[j];
                danceCost[j] = danceCost[j-1];
                danceCost[j-1] = key;
                j = j-1;
            }
        }
        
        return danceCost;
    }
    
    int minimum(int K, std::vector<int> danceCost) {
        sorting(danceCost);
        
        totalCost = 0; // re-initialize as it is one object :)
        
        for (int i = 0; i < K; ++i) {
            totalCost += danceCost[i];
        }
        
        return totalCost;
    }
    
private:
    std::vector<int> sorted;
    int totalCost = 0;
};

int main() {
    CostOfDancing test;
    std::cout << test.minimum(2, {1, 5, 3, 4}) << std::endl; // should return 4
    std::cout << test.minimum(3, {1, 5, 4}) << std::endl; // 10
    
    return 0;
}
