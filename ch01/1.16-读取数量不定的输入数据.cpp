#include <iostream>

int main()
{
    int value, sum = 0;

    std::cout << "请输入一组整数（以空格间隔）：";
    while ( std::cin >> value ) {
        sum += value;
    }

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}
