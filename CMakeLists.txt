cmake_minimum_required(VERSION 3.14)
project(learning)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

# GoogleTest
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Libraries
add_library(domain src/domain/Color.cpp)
target_include_directories(domain PUBLIC src/domain)

add_library(application src/application/useCases/ChangeColorUseCase.cpp)
target_include_directories(application PUBLIC src/application/useCases)
target_link_libraries(application PUBLIC domain)

add_library(adapters src/adapters/Console.cpp)
target_include_directories(adapters PUBLIC src/adapters)

# Main application
add_executable(app app/main.cpp)
target_link_libraries(app
    application
    adapters
)

# Test executable
add_executable(tests src/application/useCases/ChangeColorUseCaseSpec.cpp)
target_link_libraries(tests
    application
    adapters
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests)