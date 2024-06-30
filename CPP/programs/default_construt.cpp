#include<iostream>
using namespace std;
class hello
{
    public:
    int id;
    char grade;
    string name;
    hello()
    {
        cout<<"Default constructor called"<<endl;
        id=1;
        grade='A';
        name="Ashu";
    }
    void read()
    {
        cout<<"My id is:"<<id<<endl;
        cout<<"My name is:"<<name<<endl;
        cout<<"My grade is:"<<grade<<endl;
    }
};
int main()
{
    hello h1,h2,h3;
    h1.read();
    h2.read();
    h3.read();

}