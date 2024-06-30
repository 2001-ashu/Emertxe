#include<iostream>
using namespace std;
class Swap
{
    public:
    void oper(int &a,int &b)
    {
        int t=a;
        a=b;
        b=t;
    }
};
int main()
{
    Swap c1;
    int n1=10,n2=20;
    cout<<"Before swapping:\nn1="<<n1<<"\nn2="<<n2<<endl;
    c1.oper(n1,n2);
    cout<<"After swapping:\nn1="<<n1<<"\nn2="<<n2<<endl;

}