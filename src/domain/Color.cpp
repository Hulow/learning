#include "Color.h"
#include <cstdint> 
#include <bitset>

Color::Color(uint8_t red, uint8_t green, uint8_t blue): _red(red), _green(green), _blue(blue) {};

Color Color::from(uint8_t red, uint8_t green, uint8_t blue) {
    return Color(red, green, blue);
};

uint8_t Color::getRed() {
    return this->_red;
};

uint8_t Color::getGreen() {
    return this->_green;
};

uint8_t Color::getBlue() {
    return this->_blue;
};

std::bitset<8> Color::convertRedtoBit() {
    return std::bitset<8>(this->_red);
};

std::bitset<8> Color::convertGreentoBit() {
    return std::bitset<8>(this->_green);
};

std::bitset<8> Color::convertBluetoBit() {
    return std::bitset<8>(this->_blue);
};
