# supplement1
Prereqs:
- cmake
- ctest

This implements the functions:
- add_two_nums(double num1, double num2): adds two numbers together
- add_key_value_pair(map<string,int> mp, string key, int value): If the specified key exists in the map, its associated value is incremented by `value`. Otherwise, the key is added to the map with the given `value` 
- str_len(string s): gets the strings length

# How to run
1) make a /build dir
```
mkdir build/
```
2) change directory inside the build dir
```
cd build/
```
3) run cmake and make
```
cmake .. && make
```
4) run ctest on the file or just run the executable
ctest:
```
ctest ./mytest
```
executable:
```
./my_test
``` 

