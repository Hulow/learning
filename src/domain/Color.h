#include <cstdint>

class Color {
    public: 
        Color(uint8_t red, uint8_t green, uint8_t blue): red_(red), green_(green), blue_(blue) {}

    uint8_t getRed() { return red_;}

    uint8_t getGreen() { return green_; }

    uint8_t getBlue() { return blue_; }

    private: 
        uint8_t red_;
        uint8_t green_;
        uint8_t blue_;
};