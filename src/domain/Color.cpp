#include "Color.h"
#include <cstdint> 

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
