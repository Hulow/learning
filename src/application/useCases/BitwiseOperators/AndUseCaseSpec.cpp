#include <bitset>
#include "gtest/gtest.h"

#include "../../adapters/ConsoleMock.h"
#include "../dtos/UseCaseDto.h"
#include "./AndUseCase.cpp"

struct MaskTestCase {
    uint8_t currentColor;
    std::bitset<8> currentColorBits;
    std::bitset<8> maskingColorBits;
    std::bitset<8> newColorBits;
    uint8_t newColor;
};

MaskTestCase tests[] = {
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00000001),
        std::bitset<8>(0b00000000),
        0
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00000011),
        std::bitset<8>(0b00000010),
        2
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00000111),
        std::bitset<8>(0b00000010),
        2
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00001111),
        std::bitset<8>(0b00001010),
        10
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00011111),
        std::bitset<8>(0b00011010),
        26
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00111111),
        std::bitset<8>(0b00111010),
        58
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b01111111),
        std::bitset<8>(0b01111010),
        122
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b11111111),
        std::bitset<8>(0b11111010),
        250
    },
};

TEST(AndUseCase, ShouldChangeColor) {
   SCOPED_TRACE("Given a color to Mask");
    ConsoleMock console ;
     AndUseCase usecase(console);
    {
        SCOPED_TRACE("When the color is masked");
        for (const auto& test : tests) {
            UseCaseDto dto = UseCaseDto::from(test.currentColor, std::bitset<8>(test.maskingColorBits));
            auto [currentColor, currentColorBits, maskingColor, newColorBits, newColor] = usecase.execute(dto);

            {
                SCOPED_TRACE("Then the use case should return the expected new color in bit");
                EXPECT_EQ(newColorBits, test.newColorBits);
            };
            {
                SCOPED_TRACE("Then the use case should return the expected new color in uint8_t");
                EXPECT_EQ(newColor, test.newColor);
            }
        }
    }
};