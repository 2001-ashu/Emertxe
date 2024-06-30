#include <iostream>
using namespace std;
class constructor_overloading
{
public:
    float area;
    constructor_overloading()
    {
        cout << "Constructor with 0 arguments." << endl;
        area = 0;
    }
    constructor_overloading(int a, int b)
    {
        cout << "Constructor with 2 arguments." << endl;
        area = a * b;
    }
    void display()
    {
        cout << "area:" << area << endl;
    }
};
int main()
{
    constructor_overloading CO1;
    CO1.display();

    constructor_overloading CO2(5, 10);

    CO2.display();
}

