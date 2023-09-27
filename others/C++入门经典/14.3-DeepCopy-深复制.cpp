#include <iostream>

class Tricycle
{
    public:
        Tricycle();
        Tricycle(const Tricycle &);
        ~Tricycle();

        int GetSpeed() const { return *speed; }
        void SetSpeed(int newSpeed) { *speed = newSpeed; }
    
    private:
        int *speed;
};

Tricycle::Tricycle()
{
    speed = new int;
    *speed = 5;
}

Tricycle::Tricycle(const Tricycle & rhs)
{
    speed = new int;  // 分配新的内存
    *speed = rhs.GetSpeed();
}

Tricycle::~Tricycle()
{
    delete(speed);
    speed = nullptr;
}




int main()
{
    Tricycle wi;

    Tricycle da(wi);  // 调用Tricycle的复制构造函数，wi是rhs

    std::cout << da.GetSpeed() << std::endl;

    wi.SetSpeed(10);
    std::cout << da.GetSpeed() << std::endl;

    std::cout << wi.GetSpeed() << std::endl;


    return 0;
}