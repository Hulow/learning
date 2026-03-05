#pragma once
#include <cstdint> 
#include <bitset>

class Color {
    private: 
        uint8_t _color;
        Color(uint8_t color);

    public: 
        static Color from(uint8_t color);
        uint8_t getRed();
        std::bitset<8> redtoBit();
        std::bitset<8> greentoBit();
        void maskRedColor(std::bitset<8> value);
        uint8_t bitToColor(std::bitset<8> color);
        uint8_t redToInt();

    };

