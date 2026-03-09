#include "../ports/IConsole.h"

using namespace std;

class ConsoleMock : public IConsole {
    private:
        int _calls = 0;
    public:
        std::string prompt(string message);
        void write(string message);
        void writeError(string message);
        void inform(string message);
        int getCalls();
};