cmake_minimum_required(VERSION 3.14)
project(learning)

# -------------------------
# Project Settings
# -------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# -------------------------
# External dependencies
# -------------------------
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)
enable_testing()

# -------------------------
# Project Libraries
# -------------------------
add_subdirectory(src/domain)
add_subdirectory(src/application/useCases)
add_subdirectory(src/adapters)

# -------------------------
# Main Application
# -------------------------
add_executable(app app/main.cpp)
target_link_libraries(app
    application
    adapters
)

# -------------------------
# Unit Tests
# -------------------------
add_executable(tests src/application/useCases/BitwiseOperators/MaskColorUseCaseSpec.cpp)
target_link_libraries(tests
    application
    adapters
    GTest::gtest_main
)
include(GoogleTest)
gtest_discover_tests(tests)