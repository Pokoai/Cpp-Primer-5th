#include <iostream>

using namespace std;

class Counter
{
public:
    Counter();
    Counter(int initialValue); // 可用于将 int 转换为 Counter
    ~Counter() {}
    int getValue() const { return value; }
    void setValue(int x) { value = x; }
    void increment() { ++value; }
    const Counter& operator++();    // 前缀
    const Counter operator++(int);  // 后缀
    Counter operator+(const Counter &);  // 加法
    operator unsigned int();  // 将 Counter 转换为 int
private:
    int value;
};

Counter::Counter():
value(0)
{}

Counter::Counter(int initialValue):
value(initialValue)
{}

const Counter& Counter::operator++()
{
    ++value;
    return *this;
}

const Counter Counter::operator++(int)
{
    Counter temp(*this);
    ++value;
    return temp;
}

Counter Counter::operator+(const Counter &rhs)
{
    Counter temp(*this);
    temp.value += rhs.value;
    return temp;

    // 第二种方式
    // return Counter(value + rhs.getValue());
}

Counter::operator unsigned int()
{
    return (value);
}

int main()
{
    Counter c;
    cout << "The value is " << c.getValue() << endl;
    c.increment();
    cout << "The value of c is " << c.getValue() << endl;
    ++c;
    cout << "The value of c is " << c.getValue() << endl;
    Counter a = ++c;
    cout << "The value of a is " << a.getValue() << endl;
    cout << " and c: " << c.getValue() << endl;

    Counter d, e(5);
    d = a + e;
    cout << "The value of d is " << d.getValue() << endl;

    Counter f = 10;  // 将内置类型变量赋值给自定义对象
    cout << "The value of f is " << f.getValue() << endl;  

    int g = f;  // 将对象赋值给内置类型变量
    cout << "g = " << g << endl;  
    return 0;
}
