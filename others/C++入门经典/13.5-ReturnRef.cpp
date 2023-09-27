// 指向对象的引用不在作用域内

#include <iostream>

class SimpleCat
{
    public:
        SimpleCat() {}
        SimpleCat(int age);
        ~SimpleCat() {}
        int GetAge() const { return age; }
        void SetAge(int newAge) { age = newAge; }

    private:
        int age;
};

SimpleCat::SimpleCat(int age):
age(age) {}

SimpleCat &TheFunction();

int main()
{
    SimpleCat &rCat = TheFunction();

    std::cout << rCat.GetAge() << std::endl;

    SimpleCat * p = &rCat;  
    delete(p);  // 虽然能够编译通过，但这是一个定时炸弹。释放掉p后，rCat这个引用将指向空对象，这是非法的！

    return 0;
}

SimpleCat &TheFunction()
{
    SimpleCat *pCat = new SimpleCat(3);

    return *pCat;
}