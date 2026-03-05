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
        MaskColorUseCaseDto dto = MaskColorUseCaseDto::from(250, 0, 0, std::bitset<8>(0b00110010));
        usecase.execute(dto);
        {
            SCOPED_TRACE("Then the color should be darker");
            // EXPECT_EQ(console.getCalls(), 3);
        }
    }
}