#include <iostream>

class Counter {
    public:
        Counter();
        Counter(int initialValue);
        Counter(const Counter &rhs);
        ~Counter();
        int getValue() const { return value; }
        void setValue(int x) { value = x; }
        int getSpeed() const { return *speed; }
        void setSpeed(int newSpeed) { *speed = newSpeed; }

        const Counter& operator++();         // 重载前缀递增运算符++
        const Counter operator++(int);       // 重载后缀递增运算符++
        Counter operator+(const Counter&);   // 重载加法运算符+
        Counter operator=(const Counter&);   // 重载赋值运算符

    private:
        int value;
        int * speed;
};

// 构造函数
Counter::Counter():
value(0)
{
    speed = new int;
}

// 构造函数
Counter::Counter(int initialValue):
value(initialValue)
{
    speed = new int;
}

// 复制构造函数
Counter::Counter(const Counter &rhs)
{
    speed = new int;
    *speed = rhs.getSpeed();
}

// 析构函数
Counter::~Counter()
{
    delete speed;
    speed = nullptr;
}


const Counter& Counter::operator++()
{
    ++value;
    return *this;
}

const Counter Counter::operator++(int)
{
    Counter temp(*this);  // 创建一个临时对象存储原始值
    ++value;
    return temp;
}

Counter Counter::operator+(const Counter &rhs)
{
    return Counter(value + rhs.getValue());
}

Counter Counter::operator=(const Counter &rhs)
{
    if ( this == &rhs ) {  // 自己给自己赋值
        return *this;
    }

    delete speed;       // 释放掉原来对象的成员变量的内存
    speed = new int;    // 重新分配内存
    *speed = rhs.getSpeed();

    value = rhs.getValue();
    
    return *this;
}

int main()
{
    Counter c;

    std::cout << "The value of c is " << c.getValue()
        << std::endl;

    ++c;
    std::cout << "The value of ++c is " << c.getValue()
        << std::endl;

    Counter a;
    a = ++c;  
    std::cout << "The value of c is " << c.getValue()
        << std::endl;
    std::cout << "The value of a is " << a.getValue()
        << std::endl;

    c++;
    std::cout << "The value of c++ is " << c.getValue()
        << std::endl;

    Counter d;
    d = a + c;
    std::cout << "The value of d is " << d.getValue()
        << std::endl;
    d.setSpeed(100);

    Counter e;
    e.setSpeed(10);
    std::cout << "The speed of e is " << e.getSpeed()
        << std::endl;
    e = d;
    std::cout << "The speed of e is " << e.getSpeed()
        << std::endl;

    return 0;
}