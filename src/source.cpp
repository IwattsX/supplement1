#include "math_utils.h"
#include "mp_key_utils.h"
#include "str_len_utils.h"

#include <string>
#include <map>

/**
 * @brief Adds two numbers together and returns the result as a double.
 * 
 * This function takes two `double` values as input and computes their sum.
 * 
 * @param num1 The first number to add.
 * @param num2 The second number to add.
 * @return double The result of num1 + num2.
 */
double add_two_nums(const double num1, const double num2){
    return num1 + num2;
}

/**
 * @brief Computes the length of a given string.
 * 
 * Uses `std::string::size()` to determine the number of characters in the input string.
 * 
 * @param s The string whose length is to be calculated.
 * @return int The number of characters in the string `s`.
 */
int str_len(std::string s){
	return s.size();
}

/**
 * @brief Adds or updates a key-value pair in a map.
 * 
 * If the specified key exists in the map, its associated value is incremented by `value`.
 * Otherwise, the key is added to the map with the given `value`.
 * 
 * @param mp A reference to the map to be updated.
 * @param key The key to add or update in the map.
 * @param value The value to set or increment for the specified key.
 */
void add_key_value_pair(std::map<std::string, int>& mp, std::string key, int value){
    if (mp.find(key) != mp.end()) {
        mp[key] += value;  // Increment existing key's value.
    } else {
        mp[key] = value;   // Insert new key-value pair.
    }
}
