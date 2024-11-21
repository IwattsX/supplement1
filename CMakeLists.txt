cmake_minimum_required(VERSION 3.0) # Or your desired minimum version

project(ProjISupplement1) # Replace 'MyProject' with your project name

set(CMAKE_CXX_STANDARD 17) # Set the C++ standard you want to use

# Include the directory containing header files
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add the library target and its source files
add_library(myLib src/source.cpp)

# Add the main executable and link it with the library
add_executable(main src/main.cpp)
target_link_libraries(main myLib)

# Add the test executable and link it with the library
add_executable(my_test tests/test.cpp)
target_link_libraries(my_test myLib)

# Enable testing and add a test target
enable_testing()
add_test(test1 my_test COMMAND my_test)
