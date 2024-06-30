#include<iostream>
using namespace std;
class stu
{
    public:
    int age;
    string name;
    void display()
    {
        cout<<age<<name<<endl;
    }
};
class hello:public stu
{

};
int main()
{
    hello h;
    h.display();
}
// default constuctor called