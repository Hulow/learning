#include "../src/adapters/Console.cpp"
#include "../src/application/useCases/TurnOnAllLEDsUseCase.cpp"

int main() {
    Console console;
    TurnOnAllLEDsUseCase usecase(console);
    usecase.execute();
    return 0;
};