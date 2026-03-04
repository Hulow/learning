#pragma once

class IConsole {
    public:
        virtual ~IConsole() = default;
        virtual std::string prompt(const std::string message) = 0;
        virtual void write(const std::string message) = 0;
        virtual void writeError(const std::string message) = 0;
        virtual void inform(const std::string message) = 0;
};