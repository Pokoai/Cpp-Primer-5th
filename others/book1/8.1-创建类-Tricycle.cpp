#include <iostream>

using namespace std;

class Tricycle 
{
public:
    Tricycle(int initialSpeed);
    ~Tricycle();
    int getSpeed() const;
    void setSpeed(int speed);
    void pedal();
    void brake();
    
private:
    int speed;
};

// 类函数的定义
Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

Tricycle::~Tricycle()
{
// do nothing
}

int Tricycle::getSpeed() const
{
    return speed;
}

void Tricycle::setSpeed(int newSpeed) 
{
    if (newSpeed >= 0) {
        speed = newSpeed;
    }
}

void Tricycle::pedal()
{
    
    setSpeed(speed + 1);
    cout << "\nPedaling; tricycle speed " << speed << " mph\n";
}

void Tricycle::brake()
{
    setSpeed(speed - 1);
    cout << "\nBraking; tricycle speed " << speed << " mph\n";
}


int main()
{
    Tricycle wichita(5);
    //wichita.setSpeed(0);
    wichita.pedal();    
    wichita.pedal();    
    wichita.pedal();    
    wichita.brake();
    wichita.brake();
    wichita.brake();

    return 0;
}
