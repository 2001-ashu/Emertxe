#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Number 1:"; cin>>a;
    cout<<"Enter Number 2:"; cin>>b;
    for (int i = 0; i < b; i++)
    {
        a++;
    }
    cout<<"Addition of two numbers is: "<<a<<endl;
    
}