#include <iostream>

class Counter
{
    public:
        Counter();
        Counter(int newValue);  // 该构造函数有第二功能：将 int 变量转换为 Counter类型变量
        ~Counter() {};
        int getValue() const { return value; }
        void setValue(int newValue) { value = newValue; }
        const Counter& operator++();        // ++前缀运算符重载
        const Counter operator++(int);      // ++后缀运算符重载
        Counter operator+(const Counter&);  // 加法运算符
        Counter operator=(const Counter&);  // 赋值运算符
        operator unsigned int();            // 转换运算符；将 Counter 转换为 int

    private:
        int value;
};

Counter::Counter():
value(0)
{}

Counter::Counter(int newValue):
value(newValue)
{}

// ++前缀运算符重载
const Counter& Counter::operator++()
{
    ++value;
    
    return *this;  // 返回本身，用引用返回方式即可
}

// ++后缀运算符重载
const Counter Counter::operator++(int)
{
    Counter temp(*this);  // 局部变量 temp，所以不能返回引用，而是按值返回临时对象

    ++value;
    
    return temp;  // 返回的是递增前的 *this
}

// 加法运算符重载
Counter Counter::operator+(const Counter &rhs)
{
    return Counter( value + rhs.getValue() );
}

// 赋值运算符重载
Counter Counter::operator=(const Counter &rhs)
{
    value = rhs.getValue();

    return *this;
}

// 转换运算符
Counter::operator unsigned int()
{
    return value;
}


int main()
{
    Counter c;
    
    std::cout << "c的值为：" << c.getValue() << std::endl;

    ++c;
    std::cout << "++c的值为：" << c.getValue() << std::endl;

    std::cout << "c++的值为：" << (c++).getValue() << std::endl;

    Counter a(3), b(13), d;
    d = a+b;
    std::cout << "a+b=" << d.getValue() << std::endl; 

    Counter e(5), f;
    f = e;
    std::cout << "f=" << f.getValue() << std::endl; 

    Counter g;
    int n = 11;
    g = n;
    std::cout << "g=" << g.getValue() << std::endl; 

    int t = e;
    std::cout << "t=" << t << std::endl; 

    return 0;
}