#include <iostream>
#include <string>

int main()
{
    std::string s, ss;

    std::cout << "输入多个字符串(以空格间隔)：";
    while ( std::cin >> s ) {
        //ss += s;
        ss += s;
        ss += ' ';
    }
    std::cout << ss << std::endl;

    return 0;
}
