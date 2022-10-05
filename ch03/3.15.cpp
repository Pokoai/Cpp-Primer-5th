#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string>str;
    string s;

    cout << "请输入一组字符串：";
    while ( cin >> s ) {
        str.push_back(s);
    }

    for ( auto &s : str  ) {
        cout << s << ' ';
    }
    cout << endl;

    return 0;
}

