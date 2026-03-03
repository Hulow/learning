class ConsoleMock : public IConsole {
    int calls = 0
    public:
        std::string prompt(const std::string& message) override {
            calls++
            return "mocked input";
        }
        void write(const std::string& message) override {
            calls++
        }
        void writeError(const std::string& message) override {
            calls++
        }
        void inform(const std::string& message) override {
            calls++
        }
};