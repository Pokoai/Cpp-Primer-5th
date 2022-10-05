#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    cout << "请输入带标点符号的字符串：";
    string s;
    cin >> s;

    for ( auto c : s ) {
        if ( ! ispunct(c) ) {
            cout << c;
        }
    }
    cout << endl;

    return 0;
}
