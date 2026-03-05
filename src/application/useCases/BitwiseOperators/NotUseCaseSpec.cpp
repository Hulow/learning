#include <bitset>
#include "gtest/gtest.h"

#include "../../adapters/ConsoleMock.h"
#include "../dtos/UseCaseDto.h"
#include "./NotUseCase.h"

struct NotTestCase {
    uint8_t currentColor;
    std::bitset<8> currentColorBits;
    std::bitset<8> maskingColorBits;
    std::bitset<8> newColorBits;
    uint8_t newColor;
};

NotTestCase notTests[] = {
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00000001),
        std::bitset<8>(0b11111010),
        250
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00000011),
        std::bitset<8>(0b11111000),
        248
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00000111),
        std::bitset<8>(0b11111000),
        248
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00001111),
        std::bitset<8>(0b11110000),
        240
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00011111),
        std::bitset<8>(0b11100000),
        224
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00111111),
        std::bitset<8>(0b11000000),
        192
    },
};

TEST(NotUseCase, NotUseCase) {
   SCOPED_TRACE("Given a color to update");
    ConsoleMock console ;
     NotUseCase usecase(console);
    {
        SCOPED_TRACE("When the use case is NOT");
        for (const auto& test : notTests) {
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