#include "../src/adapters/Console.cpp"

int main() {
    Console console;
    const std::string input = console.prompt("hello");
    console.write(input);
    console.writeError(input);
    console.inform(input);
    return 0;
};