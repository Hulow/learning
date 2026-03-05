#include "Color.h"
#include <cstdint> 
#include <bitset>

Color::Color(uint8_t color): _color(color) {};

Color Color::from(uint8_t color) {
    return Color(color);
};

uint8_t Color::getRed() {
    return this->_color;
};

std::bitset<8> Color::redtoBit() {
    return std::bitset<8>(this->_color);
};

void Color::maskRedColor(std::bitset<8> value) {
     std::bitset<8> redBits = redtoBit(); 
    this->_color = bitToColor(redBits & value);
};

uint8_t Color::bitToColor(std::bitset<8> color)  {
    return color.to_ulong();
};

uint8_t Color::redToInt()  {
    return static_cast<uint8_t>(this->_color);
};

