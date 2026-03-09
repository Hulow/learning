#pragma once

#include <string>

#include "../../ports/IConsole.h"
#include "../dtos/ContainerDto.h"

using namespace std;

class VectorUseCase {
    private: 
        IConsole& _console;
    
    public:
        VectorUseCase(IConsole& _console);
        void execute(ContainerDto dto);
};