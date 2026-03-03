#include <cstdint>

class ChangeColorUseCaseDto {
    private:
        uint8_t red;
        uint8_t green;
        uint8_t blue;
        ChangeColorUseCaseDto(std::uint8_t red, std::uint8_t green, std::uint8_t blue): red(red), green(green), blue(blue) {}

    public:
        static ChangeColorUseCaseDto from(std::uint8_t red, std::uint8_t green, std::uint8_t blue) {
            return ChangeColorUseCaseDto(red, green, blue);
        }
    
        uint8_t getRed() const {
            return red;
        }

        uint8_t getGreen() const {
            return green;
        }

        uint8_t getBlue() const {
            return blue;
        }
};