#include "../src/adapters/Console.cpp"
#include "../src/application/useCases/ChangeColorUseCase.cpp"

int main() {
    Console console;
    ChangeColorUseCase usecase(console);
    const ChangeColorUseCaseDto dto = ChangeColorUseCaseDto::from(200, 100, 50);
    usecase.execute(dto);
    return 0;
};