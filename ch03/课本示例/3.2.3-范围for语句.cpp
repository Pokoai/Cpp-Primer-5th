#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s("Hello World!!!");
    decltype(s.size()) punctCnt = 0;
    
    // 统计标点符号的个数
    for ( auto c : s ) {
        if ( ispunct(c) ) {
            ++punctCnt;
        }
    }    
    std::cout << punctCnt << std::endl;

    // 全改为大写字母
    for ( auto &c : s ) {
        c = toupper(c);
    }
    std::cout << s << std::endl;

    return 0;
}
