#include "math_utils.h"
#include "mp_key_utils.h"
#include "str_len_utils.h"

#include <string>
#include <map>

double add_two_nums(const double num1, const double num2){
	return num1 + num2;
}

int str_len(std::string s){
	return s.size();
}

void add_key_value_pair(std::map<std::string, int> &mp, std::string key, int value){
	if(mp.find(key) != mp.end()){
		mp[key] = mp[key] + value;
	}
	else{
		mp.insert(std::pair<std::string, int>(key, value));
	}
}
