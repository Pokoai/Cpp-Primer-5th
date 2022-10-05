#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(10, 1);

    cout << "原向量: ";
    for ( auto n : v ) {
        cout << n << ' ';
    }
    cout << endl;

    for ( auto it = v.begin(); it != v.end(); ++it ) {
        *it *= 2;
    } 

    cout << "现向量: ";
    for ( auto n : v ) {
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}
