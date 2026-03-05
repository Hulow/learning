#include <bitset>
#include <tuple>

#include "../dtos/MaskColorUseCaseDto.h"
#include "../../ports/IConsole.h"
#include "../../domain/Color.h"

class MaskColorUseCase {
    public:
        MaskColorUseCase(IConsole& console): console(console){}
        std::tuple<uint8_t, std::bitset<8>, std::bitset<8>, std::bitset<8>, uint8_t>
        execute(MaskColorUseCaseDto dto) {
            Color color =  Color::from(dto.getRed());
            uint8_t currentRed = color.getRed();
            std::bitset<8> currentRedBits = color.redtoBit();

            std::bitset<8> maskingColor = dto.getMaskingValue();
            color.maskRedColor(dto.getMaskingValue());

            std::bitset<8> newRedBits = color.redtoBit();
            uint8_t newRed = color.getRed();
            
            return std::make_tuple(currentRed, currentRedBits, maskingColor, newRedBits, newRed);;
        };

    private:
        IConsole& console;
};