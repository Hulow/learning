#pragma once

#include "../../ports/IConsole.h"
#include "../dtos/MaskColorUseCaseDto.h"

struct MaskColorResult {
    uint8_t currentColor;
    std::bitset<8> currentColorBits;
    std::bitset<8> maskingColor;
    std::bitset<8> newColorBits;
    uint8_t newColor;
};

class AndUseCase {
    private:
        IConsole& _console;

    public:
        AndUseCase(IConsole& _console);
        MaskColorResult execute(MaskColorUseCaseDto dto);
};