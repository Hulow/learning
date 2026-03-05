#pragma once

#include "../../ports/IConsole.h"
#include "../dtos/UseCaseDto.h"

struct NotUseCaseResult {
    uint8_t currentColor;
    std::bitset<8> currentColorBits;
    std::bitset<8> maskingColor;
    std::bitset<8> newColorBits;
    uint8_t newColor;
};

class NotUseCase {
    private:
        IConsole& _console;

    public:
        NotUseCase(IConsole& _console);
        NotUseCaseResult execute(UseCaseDto dto);
};