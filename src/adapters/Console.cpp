#include <string>
#include <iostream>
#include "../ports/IConsole.h"

class Console : public IConsole {
    public:
        std::string prompt(const std::string& message) override {
            std::cout << "Please prompt a value: ";
            std::string input;
            std::cin >> input;
            return input;
        }

        void write(const std::string& message) override {
            std::cout << message << std::endl;
        }
    
        /* Unbuffered (flushes immediately). */
        void writeError(const std::string& message) override { 
            std::cerr << "Something went wrong: " << message << std::endl;
        }

        /* Buffered (doesn't flush immediately). */
        void inform(const std::string& message) override {
            std::clog << message << std::endl;
        }
};
