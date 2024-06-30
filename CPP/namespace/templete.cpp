#include <iostream>
using namespace std;
template <typename T>

    T Max(T a, T b)
    {
        return (a > b) ? a : b;
    }

int main()
{
    cout << Max(10, 20) << endl;
    cout << Max(100, 210) << endl;
    cout << Max(14.50, 2.710) << endl;
}