/*
 Sifer Aseph
 TopCoder: BiggestRectangleEasy
 https://community.topcoder.com/stat?c=problem_statement&pm=6677
 */

#include <iostream>
#include <vector>
#include <math.h>

class BiggestRectangleEasy {
public:
    int findArea(int N) {
        int theN = N/2;
        int vertex = (-theN)/(2 * -1);
        
        area = -(vertex * vertex) + theN * vertex;
        
        return area;
    }
private:
    int area = 0;
};

int main() {
    BiggestRectangleEasy test;
    std::cout << test.findArea(11) << std::endl; // should return 6
    std::cout << test.findArea(5) << std::endl; // 1
    std::cout << test.findArea(64) << std::endl; // 256
    
    return 0;
}
