#include "../ports/IConsole.h"

class ConsoleMock : public IConsole {
    private:
        int calls = 0;
    public:
        std::string prompt(const std::string message)  {
            calls++;
            return "mocked input";
        };
        void write(const std::string message)  {
            calls++;
        };
        void writeError(const std::string message)  {
            calls++;
        };
        void inform(const std::string message){
            calls++;
        };

        int getCalls() const {
            return calls;
        }
};