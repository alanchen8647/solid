#include <iostream>

class Bird {
public:
    virtual void lay_egg() {
        std::cout << "Egg\n";
    }
};

class BirdThatCanFly : public Bird {
public:
    virtual void fly() {
        std::cout << "Flying\n";
    }
};

class Ostrich : public Bird {
public:
    void run() {
        std::cout << "Ostrich is running\n";
    }
};

class Eagle: public BirdThatCanFly {};

// For demonstration
int main() {
    Eagle eagle;
    Ostrich ostrich;
    
    eagle.lay_egg();
    eagle.fly();

    ostrich.lay_egg();
    ostrich.run();
}