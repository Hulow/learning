#include <bitset>
#include <tuple>
#include <iostream>

#include "AndUseCase.h"
#include "../dtos/MaskColorUseCaseDto.h"
#include "../../ports/IConsole.h"
#include "../../domain/Color.h"

AndUseCase::AndUseCase(IConsole& console) : _console(console){};

MaskColorResult AndUseCase::execute(MaskColorUseCaseDto dto) {
    Color color =  Color::from(dto.getColor());
    uint8_t currentColor = color.getColor();
    std::bitset<8> currentColorBits = color.colorToBits();

    std::bitset<8> maskingColorBits = dto.getMaskingValue();
    color.maskColor(dto.getMaskingValue());

    std::bitset<8> newColorBits = color.colorToBits();
    uint8_t newColor = color.getColor();
    
    return MaskColorResult{
        currentColor,
        currentColorBits,
        maskingColorBits,
        newColorBits,
        newColor
    };
};