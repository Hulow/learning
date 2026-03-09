#pragma once

#include <string>
#include <array>

#include "../../ports/IConsole.h"
#include "../dtos/ContainerDto.h"

using namespace std;


class ArrayContainerUseCase {
    private: 
        IConsole& _console;
        void printArray(array<int, 10> array);
        void returnReverseOperatorToReverseEnd(array<int, 10> array);
    public:
        ArrayContainerUseCase(IConsole& _console);
        void execute(ContainerDto dto);
};