#include <string>
#include <iostream>
#include "Console.h"

 std::string Console::prompt(const std::string message) {
    std::cout << "Please prompt a value: ";
    std::string input;
    std::cin >> input;
    return input;
};

void Console::write(const std::string message){
    std::cout << message << std::endl;
};

void Console::writeError(const std::string message) { 
    std::cerr << "Something went wrong: " << message << std::endl;
};

void Console::inform(const std::string message) {
    std::clog << message << std::endl;
};
