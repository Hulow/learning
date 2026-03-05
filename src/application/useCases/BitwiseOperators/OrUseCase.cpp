#include <bitset>
#include <tuple>
#include <iostream>

#include "OrUseCase.h"
#include "../dtos/UseCaseDto.h"
#include "../../ports/IConsole.h"
#include "../../domain/Color.h"

OrUseCase::OrUseCase(IConsole& console) : _console(console){};

OrUseCaseResult OrUseCase::execute(UseCaseDto dto) {
    Color color =  Color::from(dto.getColor());
    uint8_t currentColor = color.getColor();
    std::bitset<8> currentColorBits = color.colorToBits();

    std::bitset<8> maskingColorBits = dto.getMaskingValue();
    color.maskColorWithOrOperator(dto.getMaskingValue());

    std::bitset<8> newColorBits = color.colorToBits();
    uint8_t newColor = color.getColor();
    
    return OrUseCaseResult{
        currentColor,
        currentColorBits,
        maskingColorBits,
        newColorBits,
        newColor
    };
};