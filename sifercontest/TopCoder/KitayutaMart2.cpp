/*
 Sifer Aseph
 TopCoder: KitayutaMart2
 http://community.topcoder.com/stat?c=problem_statement&pm=13650

 Note: K is yen, T is total paid
 One apple sold is K yen, two apples sold is 2 * K yen, three apples sold 2_2 * K yen. The formula is: 2_(i-1) * K yen
 Correction: 2^(i-1) * K yen, not 2_(i-1) * K yen
 With i-th (1 <= i <= n).

 It is also assumed and guaranteed that, within the ranges of T and K, the solution exist and is unique.

 As noted, "This problem statement contains superscripts that may not display properly outside the applet." I did not know there was a power function.. the only problem I had.
 */

#include <iostream>
#include <math.h>

class KitayutaMart2 {
public:
    int numBought(int K, int T) {
        int appleCount = 1;
        if (K >= 80 && K <= 160 && T >= 80 && T <= 163680) {
            for (; T > K; T = T - floor(pow(2, appleCount-1) * K)) {
                //std::cout << "T: " << T << " K: " << K << " " << std::endl;
                appleCount++;
            }
            return appleCount;
        } else {
            exit(EXIT_FAILURE);
        }
    }
};

int main() {
    KitayutaMart2 test;
    std::cout << test.numBought(160, 163680) << std::endl;

    return 0;
}
