#include <iostream>
using namespace std;
class Car
{
private:
    int model;
    string name;
    string company;

public:
    void get_data()
    {
        cout << "Enter Model Number Of your car:";
        cin >> model;
        cout << "Enter Name of Your car:";
        cin >> name;
        cout << "Enter Company of your car:";
        cin >> company;
    }
    void read()
    {
        cout << "Model Number Of my car : "<<model<<endl;
        cout << "Enter Name of Your car : "<<name<<endl;
        cout << "Enter Company of your car:"<<company<<endl;
    }
};

int main()
{
    Car c;
    c.get_data();
    c.read();
}
