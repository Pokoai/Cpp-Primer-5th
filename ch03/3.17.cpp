#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    vector<string>str;
    string s;

    cout << "请输入一组词：";
    while ( cin >> s ) {
        str.push_back(s);
    }

    // 将单词改为大写
    for ( auto &s : str  ) {
        for ( auto &c : s ) {
            c = toupper(c);
        }
    }
    
    // 输出单词
    for ( auto &s : str  ) {
        cout << s << endl;
    }

    return 0;
}

