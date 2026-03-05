#pragma once
#include <cstdint> 
#include <bitset>

class Color {
    private: 
        uint8_t _color;
        Color(uint8_t color);

    public: 
        static Color from(uint8_t color);
        uint8_t getColor();
        std::bitset<8> colorToBits();
        void maskColorWithAndOperator(std::bitset<8> value);
        void maskColorWithOrOperator(std::bitset<8> value);
        void maskColorWithNotOperator(std::bitset<8> value);
        uint8_t bitToColor(std::bitset<8> color);
    };

