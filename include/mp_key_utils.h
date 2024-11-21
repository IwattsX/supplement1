/**
 * @file mp_key_utils.h
 * @author Isaac Watts (Isaac.s.watts@gmail.com)
 * @brief declared add_key_value_pair function
 * @version 0.1
 * @date 2024-11-21
 * 
 */

#ifndef mp_key_utils_H
#define mp_key_utils_H
#include <string>
#include <map>

void add_key_value_pair(std::map<std::string, int> &mp, std::string key, int value);

#endif // mp_key_utils_H