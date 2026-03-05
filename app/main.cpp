#include "../src/adapters/Console.h"
#include "../src/application/useCases/BitwiseOperators/NotUseCase.h"
#include <bitset>
#include <iostream>

int main() {
    Console console;
    NotUseCase usecase(console);
    const UseCaseDto dto = UseCaseDto::from(250, std::bitset<8>(0b00000111));
    auto [currentColor, currentColorBits, maskingColorBits, newColorBits, newColor] = usecase.execute(dto);

    std::cout << std::to_string(currentColor) << std::endl;
    std::cout << currentColorBits.to_string() << std::endl;
    std::cout <<  maskingColorBits.to_string() << std::endl;
    std::cout <<  newColorBits.to_string() << std::endl;
    std::cout <<  std::to_string(newColor) << std::endl;

    return 0;
};