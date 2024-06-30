#include <iostream>
using namespace std;
class car
{
    string color;
    float cost;
    string name;

public:
    void read();
    void get();
    car();
};
void car::read()
{
    cout << "color" << endl;
    cin >> color;
    cout << "name" << endl;

    cin >> name;
    cout << "cost" << endl;

    cin >> cost;
}
void car::get()
{
    cout << color << endl;
    cout << name << endl;
    cout << cost << endl;
}
car::car()
{
    cout << "Defaut constructor called" << endl;
    color = "Red"; // default value
    name = "BMW";
    cost = 1000.56;
    cout << color << endl;
    cout << name << endl;
    cout << cost << endl;
}
int main()
{

    car c2; // call default constructor

    c2.read();
    c2.get();
}