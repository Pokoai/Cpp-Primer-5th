#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // array
    int arr[10];
    for ( int i = 0; i != 10; ++i ) {
        arr[i] = i;
    }
    int arr2[10];
    for ( int i = 0; i != 10; ++i ) {
        arr2[i] = arr[i];  // 数组不能拷贝和整个赋值，只能一个个元素分别赋值
    }
    cout << "arr2:";
    for ( auto n : arr2 ) {
        cout << n << ' ';
    }
    cout << endl;
    
    // vector
    vector<int> v(10);
    for ( decltype(v.size()) i = 0; i != v.size(); ++i ) {
        v[i] = i;
    }
    vector<int> v2(v);  // vector可以拷贝，直接将整个v向量拷贝给v2，v2是v的副本
    cout << "v2  :";
    for ( auto n : v2 ) {
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}
