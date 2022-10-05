#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "请输入字符串：";
    string s;
    cin >> s;

    decltype(s.size()) i = 0;
    while ( i < s.size() ) {
        s[i] = 'X';
        i++;
    }    

    cout << s << endl;

    return 0;
}
