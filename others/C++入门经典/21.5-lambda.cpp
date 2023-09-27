#include <iostream>

int main()
{
    auto aarhus = [] () { std::cout << "lambda表达式" << std::endl; };
    aarhus();

    auto multiply = [] (int x, int y) { std::cout << "带参数的lambda表达式 " << x*y << std::endl; };
    multiply(12, 3);

    auto multiply2 = [] (int x, int y) -> int { return x*y; };
    std::cout << "带返回值的lambda表达式 " << multiply2(12, 4) << std::endl;

    int x = 12;
    auto multiply3 = [x] (int y) -> int { return x*y; };
    std::cout << "包含作用域内变量的lambda表达式 " << multiply3(5) << std::endl;

    return 0;
}