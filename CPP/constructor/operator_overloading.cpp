#include <iostream>
using namespace std;
class Operator
{

public:
    int n1, n2;
    Operator(int n1 = 0, int n2 = 0) : n1(n1), n2(n2) {}
  
    void operator -()
    {
        n1 = n1 * -1;
        n2 = n2 * -1;
    }
    void operator ++()
    {
        ++n1;
        ++n2;
    }
    void operator --()
    {
        --n1;
        --n2;
    }
    void operator ++(int)
    {
        n1++;
        n2++;
    }
    void operator --(int)
    {
        n1--;
        n2--;
    }
      void display()
    {
        cout << n1 << endl
             << n2 << endl;
    }
};
int main()
{
    Operator Op(10, -20);
    cout << "Print Same Numbers without change." << endl;
    Op.display();

    -Op;
    cout << "Print Opposite sign Numbers with change." << endl;

    Op.display();
    ++Op;
    cout << "Print Pre Increment Operation with Numbers." << endl;

    Op.display();
    --Op;
    cout << "Print Pre Decrement Operation with Numbers." << endl;

    Op.display();
    Op++;
    cout << "Print Post Increment Operation with Numbers." << endl;

    Op.display();
    Op++;
    cout << "Print Post Decrement Operation with Numbers." << endl;

    Op.display();
}
