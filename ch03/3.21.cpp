#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> str;
    string s;

    cout << "请输入一组字符串：" << endl;
    while ( cin >> s ) {
        str.push_back(s);
    }

    // 输出字符串
    cout << "字符串输出：" << endl;
    for ( auto it = str.cbegin(); it != str.cend(); ++it ) {
        cout << *it << endl;
    }

    return 0;
}
