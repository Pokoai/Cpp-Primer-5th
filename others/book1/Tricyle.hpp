#include <iostream>

class Tricyle
{
    public:
        Tricyle(int initialSpeed);
        ~Tricyle();
        int getSpeed() const
        {   
            if ( speed == 10 ) {
                std::cout << "速度已达到最大！" << std::endl;
            }
            return speed;
        }
        void setSpeed(int speed);
        void pedal()
        {
            speed += 1;
            std::cout << "Pedaling; speed: " << speed << std::endl;
        }
        void brake()
        {
            speed += -1;
            std::cout << "Braking speed: " << speed << std::endl;
        }
    private:
        int speed;
};