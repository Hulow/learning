#include "../src/adapters/Console.cpp"
#include "../src/application/useCases/ChangeColorUseCase.cpp"

int main() {
    Console console;
    ChangeColorUseCase usecase(console);
    const ChangeColorUseCaseDto dto = ChangeColorUseCaseDto::from(255, 0, 0);
    usecase.execute(dto);
    return 0;
};