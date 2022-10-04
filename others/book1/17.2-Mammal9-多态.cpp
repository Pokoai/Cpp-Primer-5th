#include <iostream>

class Mammal
{
    public: 
        Mammal():age(1) {}
        ~Mammal() {}
        virtual void speak() const { std::cout << "Mammal 叫唤" << std::endl; }

    protected:
        int age;
};

class Dog : public Mammal
{
    public:
        void speak() const { std::cout << "Dog 在叫唤" << std::endl; }
};

class Cat : public Mammal
{
    public:
        void speak() const { std::cout << "Cat 在叫唤" << std::endl; }
};

class Pig : public Mammal
{
    public:
        void speak() const { std::cout << "Pig 在叫唤" << std::endl; }
};


int main()
{
    Mammal * array[3];

    array[0] = new Dog;
    array[1] = new Cat;
    array[2] = new Pig;

    for ( int i = 0; i < 3; i++ ) {
        array[i]->speak();
    }

    return 0;
}