#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "请输入字符串：";
    string s;
    cin >> s;

    for ( auto &c : s ) {
        c = 'X';
    }

    cout << s << endl;

    return 0;
}
