#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter first no:"; cin>>n;
    cout<<"Enter second no:"; cin>>m;
    try
    {
        if (m == 0)
        {
            throw m;
        }
        else
        {
            int div = n / m;
            printf("Division:%d", div);
        }
    }
    catch (int)
    {
        cout << "Divide By Zero Error..." << endl;
    }
}