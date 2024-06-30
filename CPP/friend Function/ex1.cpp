#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A():a(10){}
    friend class B;

};
class B
{
    public:
    void dis(A obj)
    {
    cout<<"No is:"<<obj.a<<endl;
    }
};
int main()
{
    A x;
    B y;
    y.dis(x);
}