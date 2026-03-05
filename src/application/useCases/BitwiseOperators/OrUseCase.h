#pragma once

#include "../../ports/IConsole.h"
#include "../dtos/UseCaseDto.h"

struct OrUseCaseResult {
    uint8_t currentColor;
    std::bitset<8> currentColorBits;
    std::bitset<8> maskingColor;
    std::bitset<8> newColorBits;
    uint8_t newColor;
};

class OrUseCase {
    private:
        IConsole& _console;

    public:
        OrUseCase(IConsole& _console);
        OrUseCaseResult execute(UseCaseDto dto);
};