#pragma once
#include <bitset>

class UseCaseDto {
    private:
        uint8_t _color;
        std::bitset<8> _maskingValue;
        UseCaseDto(std::uint8_t color, std::bitset<8> maskingValue): _color(color), _maskingValue(maskingValue) {}

    public:
        static UseCaseDto from(std::uint8_t color, std::bitset<8> maskingValue) {
            return UseCaseDto(color, maskingValue);
        }
    
        uint8_t getColor() {
            return _color;
        }

        std::bitset<8> getMaskingValue() {
            return _maskingValue;
        }
};