#include <iostream>

using namespace std;

class Tricycle
{
public:
    Tricycle();
    Tricycle(const Tricycle &);
    ~Tricycle();
    int getSpeed() const { return *speed; }
    void setSpeed(int newSpeed) { *speed = newSpeed; }
    void pedal();
    void brake();

private:
    int * speed;
};

Tricycle::Tricycle()
{
    speed = new int;
    *speed = 5;
}

Tricycle::Tricycle(const Tricycle &rhs)
{
    speed = new int;
    *speed = rhs.getSpeed();
}

Tricycle::~Tricycle()
{
    delete speed;
    speed = nullptr;
}



