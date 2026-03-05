#include <bitset>
#include <tuple>
#include <iostream>

#include "MaskColorUseCase.h"
#include "../dtos/MaskColorUseCaseDto.h"
#include "../../ports/IConsole.h"
#include "../../domain/Color.h"

MaskColorUseCase::MaskColorUseCase(IConsole& console) : _console(console){};

std::tuple<uint8_t, std::bitset<8>, std::bitset<8>, std::bitset<8>, uint8_t> MaskColorUseCase::execute(MaskColorUseCaseDto dto) {
    Color color =  Color::from(dto.getColor());
    uint8_t currentColor = color.getColor();
    std::bitset<8> currentColorBits = color.colorToBits();

    std::bitset<8> maskingColor = dto.getMaskingValue();
    color.maskColor(dto.getMaskingValue());

    std::bitset<8> newColorBits = color.colorToBits();
    uint8_t newColor = color.getColor();
    
    return std::make_tuple(currentColor, currentColorBits, maskingColor, newColorBits, newColor);;
};