#pragma once

class ContainerDto {
    private:
        int _arrayLength;
        ContainerDto(int arrayLength) {
            this->_arrayLength = arrayLength;
        }
    
    public:
        static ContainerDto from(int arrayLength) {
            return ContainerDto(arrayLength);
        };

        int getArrayLength() {
            return _arrayLength;
        };
};