/*
 Sifer Aseph
 TopCoder: NamingConvention
 http://community.topcoder.com/stat?c=problem_statement&pm=13521
 */

#include <iostream>
#include <string>

class NamingConvention {
public:
    std::string toCamelCase (std::string variableName) {
        int count = variableName.length();
        if (count < 1 && count > 50) {
            exit(EXIT_FAILURE);
        }
        
        for (std::string::iterator itr = variableName.begin(); itr != variableName.end(); ++itr) {
            if (*itr == '_') {
                *itr = '\0';
                ++itr;
                *itr = toupper(*itr);
            }
        }
        
        return variableName;
    }
};

int main() {
    NamingConvention test;
    std::cout << test.toCamelCase("variable") << std::endl;
    std::cout << test.toCamelCase("simple_test") << std::endl;
    std::cout << test.toCamelCase("t_o_p_c_o_d_e_r") << std::endl;
    std::cout << test.toCamelCase("the_variable_name_can_be_very_long_like_this") << std::endl;
    
    return 0;
}