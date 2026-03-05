#pragma once
#include <cstdint> 
#include <bitset>

class Color {
    private: 
        uint8_t _red;
        uint8_t _green;
        uint8_t _blue;
        Color(uint8_t red, uint8_t green, uint8_t blue);

    public: 
        static Color from(uint8_t red, uint8_t green, uint8_t blue);
        uint8_t getRed();
        std::bitset<8> redtoBit();
        std::bitset<8> greentoBit();
        void maskRedColor(std::bitset<8> value);
        uint8_t bitToColor(std::bitset<8> color);
        uint8_t redToInt();

    };

