class TurnOnAllLEDsUseCase {
    public:
    TurnOnAllLEDsUseCase(IConsole& console): console(console){}
        void execute() {
            console.write("hi");
        }

    private:
        IConsole& console;

};