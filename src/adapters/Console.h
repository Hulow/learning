#pragma once
#include "../ports/IConsole.h"

class Console: public IConsole {
    public:
        std::string prompt(const std::string message);
        void write(const std::string message);
        void writeError(const std::string message);
        void inform(const std::string message);
};