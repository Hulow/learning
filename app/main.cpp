#include "../src/adapters/Console.h"
#include "../src/application/useCases/MaskColorUseCase.h"
#include <bitset>
#include <iostream>

int main() {
    Console console;
    MaskColorUseCase usecase(console);
    const MaskColorUseCaseDto dto = MaskColorUseCaseDto::from(250, std::bitset<8>(0b11111111));
    auto [currentColor, currentColorBits, maskingColorBits, newColorBits, newColor] = usecase.execute(dto);

    std::cout << std::to_string(currentColor) << std::endl;
    std::cout << currentColorBits.to_string() << std::endl;
    std::cout <<  maskingColorBits.to_string() << std::endl;
    std::cout <<  newColorBits.to_string() << std::endl;
    std::cout <<  std::to_string(newColor) << std::endl;

    return 0;
};