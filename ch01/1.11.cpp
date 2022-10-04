#include <iostream>

int main()
{
    int a, b;

    std::cout << "输入两个整数：";
    std::cin >> a >> b;

    while ( a <= b ) {
        std::cout << a++ << ' ';
    }    
    std::cout << std::endl;

    return 0;
}
