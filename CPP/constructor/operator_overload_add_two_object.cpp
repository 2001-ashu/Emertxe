#include <iostream>
using namespace std;
class Operator
{

public:
    int n1, n2;
    Operator(int n1 = 0, int n2 = 0) : n1(n1), n2(n2) {}
    void display()
    {
        cout << n1 << endl
             << n2 << endl;
    }
    // void operator-()
    // {
    //     n1 = n1 * -1;
    //     n2 = n2 * -1;
    // }
    Operator operator+(Operator c)
    {
        Operator temp;
        cout << "Operator Executed:" << endl;
        temp.n1 = c.n1 + n1;
        temp.n2 = c.n2 + n2;
        cout<<n1<<endl<<n2<<endl;
        return temp;
    }
};
int main()
{
    Operator op(10, 20), op1(20, 30), res;
    cout << "Display values which user given;" << endl;
    op.display();
    cout << "Display values which user given;" << endl;

    op1.display();
    res = op + op1;
    cout << "Result:" << endl;
    cout << "Display addition of Two objects:" << endl;

    res.display();
}