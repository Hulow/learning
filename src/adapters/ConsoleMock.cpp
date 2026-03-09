#include <string>

#include "ConsoleMock.h"

using namespace std;

string ConsoleMock::prompt(string message) {
    this->_calls ++;
    return "mocked input"; 
};

void ConsoleMock::write(string message) {
    this->_calls ++;
};

void ConsoleMock::writeError(string message) {
    this->_calls ++;
};

void ConsoleMock::inform(string message) {
    this->_calls ++;
};

int ConsoleMock::getCalls() {
    return this->_calls;
};