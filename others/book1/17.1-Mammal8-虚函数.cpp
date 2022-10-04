#include <iostream>

class Mammal 
{
    public:
        Mammal():age(1) { std::cout << "Mammal 构造函数" << std::endl; }
        ~Mammal() { std::cout << "Mammal 析构函数" << std::endl; }
        void move() const { std::cout << "Mammal 移动1步" << std::endl; }
        virtual void speak() const { std::cout << "Mammal 叫唤" << std::endl; }

    protected:
        int age;
};

class Dog : public Mammal
{
    public:
        Dog() { std::cout << "Dog 构造函数" << std::endl; }
        ~Dog() { std::cout << "Dog 析构函数" << std::endl; }
        void move() const { std::cout << "Dog 移动5步" << std::endl; }
        void speak() const { std::cout << "Dog 叫唤" << std::endl; }
};

int main()
{
    Mammal * pDog = new Dog;  // pDog是基类Mammal指针，所以调用函数时会从Mammal类中去寻找

    pDog->move();   // 调用的是基类的move()
    pDog->speak();  // 调用的是子类的speak()

    return 0;
}