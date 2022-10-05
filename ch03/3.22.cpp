#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> text;
    text.push_back("aaa aaa aaaaa");
    text.push_back("");
    text.push_back("bbb bbb bbbbb");
    text.push_back("");
    text.push_back("cccc ccc ccccc");

    // 用范围for循环输出全文
    cout << "全文：" << endl;
    for ( auto s : text ) {
        cout << s << endl;
    }

    // 用迭代器输出第一段
    // 只读：用cbegin()、cend()
    cout << endl << "利用迭代器输出第一段：" << endl;
    for ( auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it ) {
        cout << *it << endl;
    }

    // 用下标输出第一段
    cout << endl << "利用下标输出第一段：" << endl;
    cout << text[0] << endl;
    
    // 第一段改为大写
    // 读写：用begin()、end()
    for ( auto it = text.begin(); it != text.end() && !it->empty(); ++it ) {
        for ( auto &c : *it ) {
            c = toupper(c);
        } 
    }

    // 用范围for循环输出全文
    cout << endl << "修改后全文：" << endl;
    for ( auto s : text ) {
        cout << s << endl;
    }

    return 0;
}
