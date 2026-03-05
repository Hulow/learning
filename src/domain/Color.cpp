#include "Color.h"
#include <cstdint> 
#include <bitset>

Color::Color(uint8_t color): _color(color) {};

Color Color::from(uint8_t color) {
    return Color(color);
};

uint8_t Color::getColor() {
    return this->_color;
};

std::bitset<8> Color::colorToBits() {
    return std::bitset<8>(this->_color);
};

void Color::maskColorWithAndOperator(std::bitset<8> value) {
     std::bitset<8> redBits = colorToBits(); 
    this->_color = bitToColor(redBits & value);
};

void Color::maskColorWithOrOperator(std::bitset<8> value) {
     std::bitset<8> redBits = colorToBits(); 
    this->_color = bitToColor(redBits | value);
};

uint8_t Color::bitToColor(std::bitset<8> color)  {
    return color.to_ulong();
};
