// Sifer Aseph
// TopCoder: AB
// https://community.topcoder.com/stat?c=problem_statement&pm=13642&rd=16312

#include <iostream>
#include <string>
#include <math.h>

class AB {
public:
    std::string createString(int N, int K) {
        std::string stringToMake = "";
        
        if (K > N*N/4) {
            stringToMake = "\" \"";
            return stringToMake;
        }
        
        for (size_t i = 0; i <= floor(N/2); ++i) {
            stringToMake += 'A';
        }
        
        for (size_t i = 0; i < ceil(N/2); ++i) {
            stringToMake += 'B';
        }
        
        return stringToMake; // if this is seen, it means I missed a case
    }
};

int main() {
    AB test;
    
    std::cout << test.createString(3,2) << std::endl; // should return AAB or ABB
    std::cout << test.createString(5,8) << std::endl; // empty string
    
    return 0;
}
