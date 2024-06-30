#include <iostream>
using namespace std;
class Vehicle
{
private:
    int model;
    string name;
    string company;

public:
    string mycar;
    void get_data()
    {
        cout << "Enter Model Number Of your car:";
        cin >> model;
        cout << "Enter Name of Your car:";
        cin >> name;
        cout << "Enter Company of your car:";
        cin >> company;
    }
    virtual void operator_overriding()
    {
        mycar = "BMW";
        cout << mycar << endl;
    }
    void read()
    {
        cout << "Model Number Of my car : " << model << endl;
        cout << "Enter Name of Your car : " << name << endl;
        cout << "Enter Company of your car:" << company << endl;
    }
};
class Car : public Vehicle
{
public:
    void operator_overriding()
    {
        mycar = "Supra";
        cout << mycar << endl;
    }
};

int main()
{
    Vehicle *c=new Car() ;
    c->operator_overriding();
    // c.get_data();
    // c.read();
}
