#include <bitset>
#include "gtest/gtest.h"

#include "../../adapters/ConsoleMock.h"
#include "../dtos/UseCaseDto.h"
#include "./OrUseCase.h"

struct OrTestCase {
    uint8_t currentColor;
    std::bitset<8> currentColorBits;
    std::bitset<8> maskingColorBits;
    std::bitset<8> newColorBits;
    uint8_t newColor;
};

OrTestCase orTests[] = {
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00000001),
        std::bitset<8>(0b11111011),
        251
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00000011),
        std::bitset<8>(0b11111011),
        251
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00000111),
        std::bitset<8>(0b11111111),
        255
    },
    {
        250,
        std::bitset<8>(0b11111010),
        std::bitset<8>(0b00001111),
        std::bitset<8>(0b11111111),
        255
    },
};

TEST(OrUseCase, OrUseCase) {
   SCOPED_TRACE("Given a color to update");
    ConsoleMock console ;
     OrUseCase usecase(console);
    {
        SCOPED_TRACE("When the use case is OR");
        for (const auto& test : orTests) {
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