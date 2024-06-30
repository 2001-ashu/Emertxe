#include<iostream>
#include<cstring>
using namespace std;
class dhirubai
{
    int d_net;
    char segments[50];
    dhirubai(){}
    public:
    dhirubai(int d_net,char segments[50])
    {
        this->d_net=d_net;
        strcpy(this->segments,segments);
    }
    void display1()
    {
        cout<<"**** Dhirubai Ambani Info ****\n";
        cout<<"Dhirubai Ambani Started Segments As Follows: "<<segments<<endl;
        cout<<"Networth :"<<d_net<<" Billion"<<endl;
    }




};
class Mukesh
{
    int m_net;
    char segments[50];
    Mukesh(){}
    public:
    Mukesh(int m_net,char segments[50])
    {
        this->m_net=m_net;
        strcpy(this->segments,segments);
    }
    void display2()
    {
        cout<<"**** Mukesh Ambani Info ****\n";
        cout<<"Mukesh Ambani Started Segments As Follows: "<<segments<<endl;
        cout<<"Networth :"<<m_net<<" Billion"<<endl;
    }
};
class Akash
{
    int a_net;
    char segments[50];
    Akash(){}
    public:
    Akash(int a_net,char segments[50])
    {
        this->a_net=a_net;
        strcpy(this->segments,segments);
    }
    void display3()
    {
        cout<<"**** Akash Ambani Info ****\n";
        cout<<"Akash Ambani Started Segments As Follows: "<<segments<<endl;
        cout<<"Networth :"<<a_net<<" Billion"<<endl;
    }
};
int main()
{
    dhirubai d(1,(char *)"Reliance with retail & textile");
    d.display1();
    Mukesh m(10,(char *)"petroleum segment");
    m.display2();
    Akash a(90,(char *)"JIO segment");
    a.display3();
}