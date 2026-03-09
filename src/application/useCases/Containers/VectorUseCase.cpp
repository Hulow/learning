#include <string>
#include <vector>

#include "../../ports/IConsole.h"
#include "../dtos/ContainerDto.h"
#include "./VectorUseCase.h"

using namespace std;

VectorUseCase::VectorUseCase(IConsole& console) : _console(console) {};

void VectorUseCase::execute(ContainerDto dto) {
    vector<uint8_t> vector1(dto.getArrayLength(), 0);
    /* Assign modifxy also the size of the vector */
    vector1.assign(1, 0b00000011);

    for (int i = 0; i < vector1.size(); i++) {
        _console.inform(to_string(vector1.at(i)));
    }

    _console.inform("1-#############");

    vector1.assign(5, 0b00000011);

    for (int i = 0; i < vector1.size(); i++) {
        _console.inform(to_string(vector1.at(i)));
    }

    _console.inform("2-#############");

    for (int i = 0; i < vector1.size(); i++) {
        vector1.at(i) = 0b00000111;
        _console.inform(to_string(vector1.at(i)));
    }

    _console.inform("3-#############");

    vector<uint8_t> vector2 = {0b00000001, 0b00000011, 0b00000111};

    uint8_t* pointer = vector2.data();

    for (int i = 0; i < vector2.size(); i++) {
        /* Cannot use pointer.at(i) */
        _console.inform(to_string(pointer[i]));
    }

     _console.inform("4-#############");

     _console.inform(to_string(vector1.capacity()));
     _console.inform(to_string(vector1.size()));
    _console.inform(to_string(vector2.capacity()));
    _console.inform(to_string(vector2.size()));

    _console.inform("5-#############");



    vector2.emplace(vector2.begin(), 0b01000001);

     for (int i = 0; i < vector2.size(); i++) {
        _console.inform(to_string(vector2.at(i)));
    }



    return;
};
