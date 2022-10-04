// 指向对象的引用不在作用域内
// 修改方案一，全部用指针操作，不用引用

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

SimpleCat * TheFunction();

int main()
{
    SimpleCat * pCat = TheFunction();

    std::cout << pCat->GetAge() << std::endl;
 
    delete(pCat);  // 在该函数中释放内存，分别在两个地方分配和释放，此做法不推荐

    return 0;
}

SimpleCat * TheFunction()
{
    SimpleCat *pCat = new SimpleCat(3);  // 在该函数中分配内存

    return pCat;  // 返回指针
}