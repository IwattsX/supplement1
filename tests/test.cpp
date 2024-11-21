#include "math_utils.h"
#include "mp_key_utils.h"
#include "str_len_utils.h"

#include <iostream>
#include <cassert>
#include <string>


int main() {
    double result = add_two_nums(2.0, 3.0);
    assert(result == 5.0);
    std::cout << "Test add nums passed" << std::endl;


    std::map<std::string, int> mp;
    add_key_value_pair(mp, "test", 5);
    add_key_value_pair(mp, "test", 6);
    add_key_value_pair(mp, "foo", 20);
    
    assert(mp["test"] == 11);
    assert(mp["foo"] == 20);
    std::cout << "Test add_key_value_pair passed" << std::endl;


    assert(str_len("Hello") == 5);
    std::cout << "Test str_len passed" << std::endl;

    return 0;
}
