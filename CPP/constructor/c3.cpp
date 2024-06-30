#include<iostream>
using namespace std;
class Vehicle
{
    private:
    int model,prize;
    string name,company;
    public:
    Vehicle(int model,int prize,string name,string company)
    {
        this->model=model;
        this->prize=prize;
        this->name=name;
        this->company=company;
    }
    void display()
    {
        cout<<"My Vehicle Name is: "<<name<<endl;
        cout<<"My Vehicle Company Name is: "<<company<<endl;
        cout<<"My Vehicle Model Number is: "<<model<<endl;
        cout<<"My Vehicle Prize is: "<<prize<<endl;
    }


};
int main()
{
    int model,prize;
    string name,company;
    cout<<"Enter vehicle company name:";
    cin>>company;
    cout<<"Enter vehicle name:";
    cin>>name;
    cout<<"Enter Model No:";
    cin>>model;
    cout<<"Enter prize of your vehicle:";
    cin>>prize;
    Vehicle V1(model,prize,name,company);
    V1.display();

}