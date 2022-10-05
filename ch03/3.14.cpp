#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;
    int n;

    cout << "请输入一组整数：";
    while ( cin >> n ) {
        numbers.push_back(n);
    }

    for ( auto & n : numbers ) {
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}

