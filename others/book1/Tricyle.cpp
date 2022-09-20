#include <iostream>

#include "Tricyle.hpp"


Tricyle::Tricyle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

Tricyle::~Tricyle()
{
    //
}

// 类成员函数定义
void Tricyle::setSpeed(int newSpeed)
{
    if ( newSpeed > 0 ) {
        speed = newSpeed;
    }

}


int main()
{
    Tricyle bicycle(9);
    // bicycle.setSpeed(0);
    std::cout << "speed: " << bicycle.getSpeed() << std::endl;
    bicycle.pedal();
    std::cout << "speed: " << bicycle.getSpeed() << std::endl;
    bicycle.pedal();
    std::cout << "speed: " << bicycle.getSpeed() << std::endl;
    bicycle.pedal();
    std::cout << "speed: " << bicycle.getSpeed() << std::endl;
    bicycle.brake();
    std::cout << "speed: " << bicycle.getSpeed() << std::endl;

    return 0;
}