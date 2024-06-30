
#include <iostream>
#include <cstring>
using namespace std;

class stu
{
    char name[20];
    char course[20];

public:
    stu() {}
    stu(char name[20], char course[20])
    {
        strcpy(this->name, name);
        strcpy(this->course, course);
    }
    void display()
    {
        cout << "Name :" << name << endl;
        cout << "Course :" << course << endl;
    }
};

class marks : public stu
{
    int p, c, m;

public:
    marks(char name[20], char course[20], int p, int m, int c) : stu(name, course)
    {
        this->p = p;
        this->m = m;
        this->c = c;
    }
    void display1()
    {
        cout << "Marks in subjects: " << m << " " << c << " " << p << endl;
    }
};
class hello:public marks
{
    int age;
    public:
    hello(char name[20], char course[20], int p, int m, int c,int age):marks(name, course,p,m,c)
    {
        this->age=age;
    }
    void display2()
    {
        cout<<"My age is:"<<age<<endl;
    }
};

int main()
{
    hello m((char *)"Ram", (char *)"Hello", 10, 20, 30,23);
    m.display();
    m.display1();
    m.display2();
    return 0;
}
