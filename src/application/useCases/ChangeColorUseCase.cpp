#include <bitset>
#include "../dtos/ChangeColorUseCaseDto.h"
#include "../../ports/IConsole.h"
#include "../../domain/Color.h"

class ChangeColorUseCase {
    public:
        ChangeColorUseCase(IConsole& console): console(console){}
        void execute(ChangeColorUseCaseDto dto) {
            Color color =  Color::from(dto.getRed(), dto.getGreen(), dto.getBlue());
            console.inform(convertToBit(color.getBlue()));      
        }

    private:
        IConsole& console;
        std::string convertToBit(uint8_t value) {
            return std::bitset<8>(value).to_string();
        }
};