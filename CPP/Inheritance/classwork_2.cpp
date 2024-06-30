#include <iostream>
#include <cstring>
using namespace std;
class BasicInfo
{
    char name[20];
    int empid;
    char gender;

public:
    BasicInfo() {}

    BasicInfo(char name[20], int empid, char gender)
    {
        strcpy(this->name, name);
        this->empid = empid;
        this->gender = gender;
    }
    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << empid << endl;
        cout << "Employee Gender: " << gender << endl;
    }
};
class DeptInfo : public BasicInfo
{
    char deptName[30];
    char assignedwork[30];
    int time;

public:
    
    DeptInfo(char name[20], int empid, char gender, char deptName[30], char assignedwork[30], int time):BasicInfo(name,empid,gender)
    {

        strcpy(this->deptName, deptName);
        strcpy(this->assignedwork, assignedwork);
        this->time = time;
    }
    void show()
    {
        cout << "Employee Department Name: " << deptName << endl;
        cout << "Employee Assigned Work: " << assignedwork << endl;
        cout << "Employee Deadline to complete work: " << time << endl;
    }
};

int main()
{
    DeptInfo d((char *)"ashu", 12, 'M', (char *)"IT", (char *)"Interview", 8);
    d.display();
    d.show();
}