cmake_minimum_required(VERSION 3.10)
project(SampleProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the main program
add_executable(main ../src/main.cpp)

# Add the test executable
add_executable(test ../tests/test.cpp)

# Include math_utils.cpp in both targets
target_sources(main PRIVATE ../src/math_utils.cpp)
target_sources(test PRIVATE ../src/math_utils.cpp)


# Include Google Test via FetchContent
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

# Link Google Test libraries
target_link_libraries(test GTest::gtest GTest::gtest_main)
