#include <bitset>
#include "../dtos/ChangeColorUseCaseDto.h"
#include "../../ports/IConsole.h"

class ChangeColorUseCase {
    public:
        ChangeColorUseCase(IConsole& console): console(console){}
        void execute(ChangeColorUseCaseDto dto) {
            int sum = dto.getRed() | dto.getGreen();
            console.inform(convertToBit(dto.getRed())); 
            console.inform(convertToBit(dto.getGreen())); 
            console.inform(convertToBit(sum));            }

    private:
        IConsole& console;
        std::string convertToBit(int value) {
            return std::bitset<8>(value).to_string();
        }
};