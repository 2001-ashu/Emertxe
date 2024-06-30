#include <iostream>
using namespace std;
int main()
{
    int n, m;

    cout << "Enter first no:";
    cin >> n;
    cout << "Enter second no:";
    cin >> m;
    try
    {
        if (m == 0)
        {
            throw m;
        }
        else if (m < 0)
        {
            throw "Negative Value";
        }
        else if (n<m )
        {
            throw 2.5;
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
    catch (const char *)
    {
        cout << "Negative Number not allowed..." << endl;
    }
    catch (...)
    {
    
        cout << "Very Big Number not allowed..." << endl;
    }
}