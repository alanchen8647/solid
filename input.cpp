#include <iostream>

class InputSource {
    public:
    virtual std::string getInput() = 0;
};

class Keyboard : public InputSource {
public:
    std::string getInput() override {
        return "User input from keyboard";
    }
};

class Mouse : public InputSource {
public:
    std::string getInput() override {
        return "User input from mouse";
    }
};

// Right now this code assumes that input will come from the keyboard, 
// but we would like to be able to create an InputProcessor that 
// accepts input from the mouse (and potentially other input devices
// in the future). Note that each InputProcessor only needs to deal
// with one device.
class InputProcessor {
public:
    void processInput(InputSource &inputSource) {

        std::string input = inputSource.getInput();
        std::cout << "Processing: " << input << "\n";
    }
};

// For demonstration
int main() {
    InputProcessor processor;
    Keyboard keyboard;
    Mouse mouse;
    processor.processInput(keyboard);
    processor.processInput(mouse);
    return 0;
}
