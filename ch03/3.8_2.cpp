#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "请输入字符串：";
    string s;
    cin >> s;

    for ( decltype(s.size()) i = 0; i != s.size(); i++ ) {
        s[i] = 'X';        
    }
    cout << s << endl;

    return 0;
}
