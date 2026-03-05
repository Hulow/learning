#pragma once

#include "../../ports/IConsole.h"
#include "../dtos/MaskColorUseCaseDto.h"

class MaskColorUseCase {
    private:
        IConsole& _console;

    public:
        MaskColorUseCase(IConsole& _console);
        std::tuple<uint8_t, std::bitset<8>, std::bitset<8>, std::bitset<8>, uint8_t>
        execute(MaskColorUseCaseDto dto);
};