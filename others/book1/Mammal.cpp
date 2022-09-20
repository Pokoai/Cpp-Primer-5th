#include <iostream>

enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal 
{
    public:
        // 构造函数
        Mammal();
        Mammal(int age);
        virtual ~Mammal();

        // 存取器
        int getAge() const { return age; }
        void setAge(int newAge) { age = newAge; }
        int getWeight() const { return weight; }
        void setWeight(int newWeight) { weight = newWeight; } 

        // 其他成员函数
        virtual void speak() const { std::cout << "Mammal sound!" << std::endl; }
        void sleep() const { std::cout << "I`m sleeping!" << std::endl; }

    protected:
        int age;
        int weight;
};

Mammal::Mammal():
age(3),
weight(5)
{
    std::cout << "Mammal 构造器" << std::endl;
}

Mammal::Mammal(int age):
age(age),
weight(5)
{
    std::cout << "Mammal 构造器" << std::endl;
}

Mammal::~Mammal()
{
    std::cout << "Mammal 析构器" << std::endl;
}


class Dog : public Mammal
{
    public:
        Dog();
        Dog(int age);
        Dog(int age, int weight);
        ~Dog();
    
    BREED getBreed() const { return breed; }
    void setBreed(BREED newBreed) { breed = newBreed; }

    void wagTail() { std::cout << "Tailwagging..." << std::endl; }
    void speak() const { std::cout << "Dog sound!" << std::endl; }
    
    private:
        BREED breed;
};

Dog::Dog():
Mammal(),
breed(YORKIE)
{
    std::cout << "Dog 构造器" << std::endl;
}

Dog::Dog(int age):
Mammal(age),
breed(YORKIE)
{
    std::cout << "Dog(int) 构造器" << std::endl;
}

Dog::Dog(int age, int newWeight):
Mammal(age),
breed(YORKIE)
{
    weight = newWeight;
    std::cout << "Dog(int, int) 构造器" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog 析构器" << std::endl;
}

int main()
{
    // Dog fido(13, 6);
    
    // fido.speak();
    // fido.Mammal::speak();
    // fido.wagTail();
    // std::cout << "Fido age: " << fido.getAge() << std::endl;

    Mammal * pDog = new Dog;
    
    pDog->speak();
    
    Dog * pRealDog = dynamic_cast<Dog *> (pDog);
    if ( pRealDog ) {
        pRealDog->wagTail();
    } else {
        std::cout << "not a dog!" << std::endl;
    }
    

    return 0;
}