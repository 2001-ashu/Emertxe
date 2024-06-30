#include <iostream>
using namespace std;
void simple_fun(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
void reference_fun(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void pointer_fun(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x = 10;
    int y = 20;
    
    cout << "\nSimple Method Modify.\n";
    simple_fun(x, y);

    cout << x << " " << y;
    cout << "\nUsing Reference Variable Modify.\n";

    reference_fun(x, y);

    cout << x << " " << y;
    cout << "\nUsing Pointer Variable Modify.\n";

    pointer_fun(&x, &y);
    cout << x << " " << y;
}