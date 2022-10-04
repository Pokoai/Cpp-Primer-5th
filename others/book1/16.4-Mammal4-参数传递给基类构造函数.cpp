#include <iostream>

enum BREED { YOURKIE, CAIRN, DANDIE };

class Mammal 
{
    public:
        Mammal();
        Mammal(int age);
        ~Mammal();

        int getAge() const { return age; };
        void setAge(int newAge) { age = newAge; }
        int getWeight() const { return weight; }
        void setWeight(int newWeight) { weight = newWeight; }

        void speak() const { std::cout << "Mammal speak!" << std::endl; }
        void sleep() const { std::cout << "Mammal sleeping!" << std::endl; }
    
    protected:
        int age;
        int weight;
};

class Dog : public Mammal
{
    public:
        Dog();
        Dog(int age);
        Dog(int age, int weight);
        Dog(int age, BREED breed);
        Dog(int age, int weight, BREED breed);
        ~Dog();

        BREED getBread() const { return breed; }    
        void setBread(BREED newBreed) { breed = newBreed; }

        void wagTail() { std::cout << "Tail wagging... " << std::endl;}
        void begForFood() { std::cout << "Begging for food..." << std::endl; }

    private:
        BREED breed;
};

Mammal::Mammal():
age(1),
weight(5)
{
    std::cout << "Mammal()构造函数" << std::endl;
}

Mammal::Mammal(int newAge):
age(newAge),
weight(5)
{
    std::cout << "Mammal(int) 构造函数" << std::endl;
}

Mammal::~Mammal()
{
    std::cout << "Mammal析构函数" << std::endl;
}

Dog::Dog():
Mammal(),
breed(YOURKIE)
{
    std::cout << "Dog()无参构造函数" << std::endl;
}

Dog::Dog(int newAge):
Mammal(newAge)
{
    std::cout << "Dog(int)构造函数" << std::endl;
}

Dog::Dog(int age, int newWeight):
Mammal(age),
breed(YOURKIE)
{
    weight = newWeight;
    std::cout << "Dog(int, int)构造函数" << std::endl;
}

Dog::Dog(int age, int newWeight, BREED breed):
Mammal(age),
breed(breed)
{
    weight = newWeight;
    std::cout << "Dog(int, int, BREED)构造函数" << std::endl;

}

Dog::Dog(int age, BREED breed):
Mammal(age),
breed(breed)
{
    std::cout << "Dog(int, breed)构造函数" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog() 析构函数" << std::endl;
}

int main()
{
    Dog fido;
    Dog rover(4);

    fido.speak();

    return 0;
}