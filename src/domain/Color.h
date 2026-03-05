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
        uint8_t getGreen();
        uint8_t getBlue();
        std::bitset<8> convertRedtoBit();
        std::bitset<8> convertGreentoBit();
        std::bitset<8> convertBluetoBit();
    };

