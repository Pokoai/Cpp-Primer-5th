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

    // 计算相邻两数之和
    cout << "相邻两数之和为：";
    int sum;
    for ( decltype(numbers.size()) i = 0; i != numbers.size()-1; ++i ) {
        sum = numbers[i] + numbers[i+1];
        cout << sum << ' ';
    }
    cout << endl;

    cout << "首尾两数之和为：";
    for ( decltype(numbers.size()) i = 0; i != numbers.size() / 2; ++i ) {
        sum = numbers[i] + numbers[numbers.size()-i-1];
        cout << sum << ' ';
    }
    cout << endl;

    return 0;
}

