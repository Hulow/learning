#include "../src/adapters/Console.h"
#include "../src/application/useCases/Containers/ArrayContainerUseCase.h"
#include "../src/application/dtos/ContainerDto.h"
#include <bitset>
#include <iostream>

int main() {
    Console console;
    ArrayContainerUseCase usecase(console);
    const ContainerDto dto = ContainerDto::from(3);
    usecase.execute(dto);

    return 0;
};