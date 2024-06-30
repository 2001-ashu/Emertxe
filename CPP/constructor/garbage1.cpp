#include<iostream>
using namespace std;
class stu
{
     int age;
    protected:
   
    string name;
    public:
    void display()
    {
        cout<<age<<"\n"<<name<<endl;
    }
};
class hello:public stu
{
    public:
    void stud()
    {
        name="ashu";
        cout<<name<<endl;
    }
};
int main()
{
    hello h;
    h.stud();
    h.display();
    
}
// default constuctor called