#include<iostream>
using namespace std;
class stu
{
     int age;
    protected:
   
    string name;
    public:
    stu(int id=0,string name="ashu")
    {
        cout<<"Parent constructor called"<<endl;
    }
    void display()
    {
        cout<<age<<"\n"<<name<<endl;
    }
};
class hello:public stu
{
    public:
    hello(int id,string name="rohan"):stu(id,name)
    {
        cout<<"Child Constructor called"<<endl;
         
    }
    void stud()
    {
        // name="ashu";
        cout<<name<<endl;
    }
};
int main()
{
    hello h(12,"Ashu");
    hello h1;
    
    h.display();
    
}
// default constuctor called