#include "../src/adapters/Console.h"
#include "../src/application/useCases/MaskColorUseCase.cpp"
#include <bitset>
#include <iostream>

int main() {
    Console console;
    MaskColorUseCase usecase(console);
    const MaskColorUseCaseDto dto = MaskColorUseCaseDto::from(250, 100, 50, std::bitset<8>(0b00110010));
    auto [currentColor, currentColorBits, maskingColor, newColorBits, newColor] = usecase.execute(dto);

    std::cout << std::to_string(currentColor) << std::endl;
    std::cout << currentColorBits.to_string() << std::endl;
    std::cout <<  maskingColor.to_string() << std::endl;
    std::cout <<  newColorBits.to_string() << std::endl;
    std::cout <<  std::to_string(newColor) << std::endl;

    return 0;
};