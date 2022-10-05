#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };

    vector<int> ivec(begin(arr), end(arr));
    for ( auto i : ivec ) {
        cout << i << endl;
    }

    return 0;
}
