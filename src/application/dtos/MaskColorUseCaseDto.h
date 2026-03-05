#pragma once
#include <bitset>

class MaskColorUseCaseDto {
    private:
        uint8_t _red;
        uint8_t _green;
        uint8_t _blue;
        std::bitset<8> _maskingValue;
        MaskColorUseCaseDto(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::bitset<8> maskingValue): _red(red), _green(green), _blue(blue), _maskingValue(maskingValue) {}

    public:
        static MaskColorUseCaseDto from(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::bitset<8> maskingValue) {
            return MaskColorUseCaseDto(red, green, blue, maskingValue);
        }
    
        uint8_t getRed() {
            return _red;
        }

        uint8_t getGreen() {
            return _green;
        }

        uint8_t getBlue() {
            return _blue;
        }

        std::bitset<8> getMaskingValue() {
            return _maskingValue;
        }
};