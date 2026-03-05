#include "../src/adapters/Console.cpp"
#include "../src/application/useCases/MaskColorUseCase.cpp"
#include <bitset>

int main() {
    Console console;
    MaskColorUseCase usecase(console);
    const MaskColorUseCaseDto dto = MaskColorUseCaseDto::from(250, 100, 50, std::bitset<8>(0b00110010));
    auto [prevRed, prevBits, maskBits, newBits, newRed] = usecase.execute(dto);

    std::cout << std::to_string(prevRed) << std::endl;
    std::cout << prevBits.to_string() << std::endl;
    std::cout <<  maskBits.to_string() << std::endl;
    std::cout <<  newBits.to_string() << std::endl;
    std::cout <<  std::to_string(newRed) << std::endl;

    return 0;
};