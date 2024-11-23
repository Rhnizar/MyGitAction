cmake_minimum_required(VERSION 3.10)
project(SampleProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the main program
add_executable(main main.cpp)

# Add the test executable
add_executable(test test.cpp)

# Link Google Test libraries
find_package(GTest REQUIRED)
target_link_libraries(test GTest::GTest GTest::Main)
