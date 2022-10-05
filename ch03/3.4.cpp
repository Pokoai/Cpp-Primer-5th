#include <iostream>
#include <string>

int main()
{
    std::cout << "输入两个字符串(以空格分割): ";
    
    std::string s1, s2;
    std::cin >> s1 >> s2;

    if ( s1 == s2 ) {
        std::cout << "两个字符串相等" << std::endl;
    } else {
        std::cout << "较大的字符串是：" << (s1 > s2 ? s1 : s2) << std::endl;
    }

    return 0;
}
