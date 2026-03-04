#include "gtest/gtest.h"
#include "../../adapters/ConsoleMock.h"
#include "../dtos/ChangeColorUseCaseDto.h"
#include "../useCases/ChangeColorUseCase.cpp"

TEST(ChangeColorUseCase, ShouldChangeColor) {
   SCOPED_TRACE("Given a color to change");
    ConsoleMock console ;
     ChangeColorUseCase usecase(console);
    {
        SCOPED_TRACE("When the use case is executed");
        ChangeColorUseCaseDto dto = ChangeColorUseCaseDto::from(200, 100, 50);
        usecase.execute(dto);
        {
            SCOPED_TRACE("Then the console should inform it");
            EXPECT_EQ(console.getCalls(), 3);
        }
    }
}