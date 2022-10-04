// 指向对象的引用不在作用域内
// 修改方式二，在同一个函数中分配和释放内存，推荐

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

void TheFunction(SimpleCat &rCat);

int main()
{
    SimpleCat * pCat = new SimpleCat(3);

    TheFunction(*pCat);

    delete(pCat);  

    return 0;
}

void TheFunction(SimpleCat &rCat)
{
    std::cout << rCat.GetAge() << std::endl;
}