#include <string>
#include <array>

#include "ArrayContainerUseCase.h"
#include "../../ports/IConsole.h"
#include "../dtos/ContainerDto.h"

using namespace std;

ArrayContainerUseCase::ArrayContainerUseCase(IConsole& console): _console(console) {};

void ArrayContainerUseCase::execute(ContainerDto dto) {
    int items = dto.getArrayLength();
    const int count = 10;

    array<int, count> firstArray {};
    // firstArray.fill(items);

    _console.inform(firstArray.empty() ? "isEmpty" : "isNotEmpty");

    _console.inform(to_string(firstArray.size()));

    for (int& item : firstArray) {
        _console.inform(to_string(item));
    };

    _console.inform("1-#############");

    this->printArray(firstArray);

    _console.inform("2-#############");

    // firstArray.back() = 99999999;
    // firstArray.front() = 11111111;

    this->printArray(firstArray);

    _console.inform("3-#############");

    for(int i = 0; i < 10; i++) {
       firstArray.at(i) = firstArray.at(i) + i;
    };

    this->printArray(firstArray);

    _console.inform("4-#############");

    this->returnReverseOperatorToReverseEnd(firstArray);
};

void ArrayContainerUseCase::printArray(array<int, 10> array) {
    for (auto item = array.begin(); item != array.end(); ++item) {
         _console.inform(to_string(*item));
    };
};

void ArrayContainerUseCase::returnReverseOperatorToReverseEnd(array<int, 10> array) {
    for (auto item = array.rbegin(); item != array.rend(); ++item) {
            _console.inform(to_string(*item));
    };
}