#include<iostream>
using namespace std;
int main()
{
    
    int a=10;
    int b=20;
    int *ptr=new int;
    *ptr=100;
    int *cpy=ptr;
    *cpy=200;
    cout<<"Value of a="<<a<<endl;
    cout<<"value of cpy="<<*cpy<<endl;
    cout<<"Value of ptr="<<*ptr<<endl;
    
}