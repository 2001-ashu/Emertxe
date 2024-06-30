#include <iostream>
using namespace std;
class A
{
    int a, n1, n2;

public:
    A() : a(10), n1(20), n2(30) {}
    friend void fun(A &);
    friend void fun1(A &);
};

void fun(A &obj)
{
    cout << "1st No is:" << obj.a << endl;
    cout << "2nd No is:" << obj.n1 << endl;
    cout << "3rd No is:" << obj.n2 << endl;
}
void fun1(A &obj)
{
    cout << "1st No is:" << obj.a << endl;
    cout << "2nd No is:" << obj.n1 << endl;
    cout << "3rd No is:" << obj.n2 << endl;
}

int main()
{
    A x;

    fun(x);
    fun1(x);
}