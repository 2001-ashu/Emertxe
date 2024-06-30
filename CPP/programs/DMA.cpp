#include <iostream>
#include <cstring>
using namespace std;
class Hello
{

public:
    int id;
    char *name;
    Hello()
    {
        id = 10;
        name = new char[10];
    }
    ~Hello()
    {
        delete name;
    }
};
int main()
{
    Hello H;
    cout << "Id is:" << H.id << endl;
    strcpy(H.name, "Ashu");
    cout << "Name is:" << H.name << endl;
}