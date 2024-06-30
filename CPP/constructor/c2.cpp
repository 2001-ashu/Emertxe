#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll_no;
    int class_room;
    char grade;

    public:
    student(string name,int roll_no,int class_room,char grade)
    {
        this->name=name;
        this->roll_no=roll_no;
        this->class_room=class_room;
        this->grade=grade;

    }
    void get_data()
    {
        cout<<"Student Name is:"<<name<<endl;
        cout<<"Student roll_No is:"<<roll_no<<endl;
        cout<<"Student ClassRoom is:"<<class_room<<endl;
        cout<<"Student Grade is:"<<grade<<endl;

    }

};
int main()
{
    student s("Ashu",1,5,'A');
    s.get_data();
}