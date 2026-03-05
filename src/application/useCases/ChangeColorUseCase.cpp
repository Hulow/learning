#include <bitset>
#include "../dtos/ChangeColorUseCaseDto.h"
#include "../../ports/IConsole.h"
#include "../../domain/Color.h"

class ChangeColorUseCase {
    public:
        ChangeColorUseCase(IConsole& console): console(console){}
        void execute(ChangeColorUseCaseDto dto) {
            Color color =  Color::from(dto.getRed(), dto.getGreen(), dto.getBlue());
            std::bitset bitColor = color.convertBluetoBit();
        }

    private:
        IConsole& console;
};