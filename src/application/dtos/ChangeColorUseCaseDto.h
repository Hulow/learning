#pragma once

class ChangeColorUseCaseDto {
    private:
        uint8_t _red;
        uint8_t _green;
        uint8_t _blue;
        ChangeColorUseCaseDto(std::uint8_t red, std::uint8_t green, std::uint8_t blue): _red(red), _green(green), _blue(blue) {}

    public:
        static ChangeColorUseCaseDto from(std::uint8_t red, std::uint8_t green, std::uint8_t blue) {
            return ChangeColorUseCaseDto(red, green, blue);
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
};