#include "../dtos/ChangeColorUseCaseDto.h"

class ChangeColorUseCase {
    public:
    ChangeColorUseCase(IConsole& console): console(console){}
        void execute(ChangeColorUseCaseDto dto) {
            console.write(std::to_string(dto.getRed()) + " " + std::to_string(dto.getGreen()) + " " + std::to_string(dto.getBlue()));
        }

    private:
        IConsole& console;

};