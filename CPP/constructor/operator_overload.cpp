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
    void operator-()
    {
        n1 = n1 * -1;
        n2 = n2 * -1;
    }
    void operator+(int num)
    {
        cout << "Operator Executed" << endl;
        n1 = n1 + num;
        n2 = n2 + num;
    }
    void operator+(double num)
    {
        cout << "Operator Executed For double datatype" << endl;
        n1 = n1 + num;
        n2 = n2 + num;
    }
};
int main()
{
    Operator op(10, -20), s;
    op.display();
    op + 25;

    op.display();
    cout << "Default constructor called" << endl;

    s.display();
    Operator db(10, -20);
    db + 30.122; //when we initialise n1 and n2 as double data type that time it prints as a double value
    db.display();
    // default constructor called where the value instized by constructor that are printed
}