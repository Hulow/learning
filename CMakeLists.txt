cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

# Step 1: Declare GoogleTest
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# Step 2: Make it available
FetchContent_MakeAvailable(googletest)

# Step 3: Enable testing
enable_testing()

# Step 4: Add your test executable
add_executable(tests src/application/useCases/ChangeColorUseCaseSpec.cpp)

# Step 5: Link with GoogleTest
target_link_libraries(tests GTest::gtest_main)

# Step 6: Auto-discover tests
include(GoogleTest)
gtest_discover_tests(tests)