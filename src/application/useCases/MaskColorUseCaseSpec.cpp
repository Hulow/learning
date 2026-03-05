#include "gtest/gtest.h"
#include "../../adapters/ConsoleMock.h"
#include "../dtos/MaskColorUseCaseDto.h"
#include "../useCases/MaskColorUseCase.cpp"
#include <bitset>

TEST(MaskColorUseCase, ShouldChangeColor) {
   SCOPED_TRACE("Given a color to Mask");
    ConsoleMock console ;
     MaskColorUseCase usecase(console);
    {
        SCOPED_TRACE("When the color is masked");
        MaskColorUseCaseDto dto = MaskColorUseCaseDto::from(250, std::bitset<8>(0b00110010));
        usecase.execute(dto);
        {
            SCOPED_TRACE("Then the color should be darker");
            auto [currentColor, currentColorBits, maskingColor, newColorBits, newColor] = usecase.execute(dto);
            EXPECT_EQ(currentColor, 250);
        }
    }
}