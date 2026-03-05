#pragma once
#include <bitset>

class MaskColorUseCaseDto {
    private:
        uint8_t _color;
        std::bitset<8> _maskingValue;
        MaskColorUseCaseDto(std::uint8_t color, std::bitset<8> maskingValue): _color(color), _maskingValue(maskingValue) {}

    public:
        static MaskColorUseCaseDto from(std::uint8_t color, std::bitset<8> maskingValue) {
            return MaskColorUseCaseDto(color, maskingValue);
        }
    
        uint8_t getColor() {
            return _color;
        }

        std::bitset<8> getMaskingValue() {
            return _maskingValue;
        }
};