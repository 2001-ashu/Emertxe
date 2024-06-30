#include<iostream>
using namespace std;
class Swap
{
    int a,b;
    public:
    Swap(int x,int y)
    {
        a=y;
        b=x;
    }
    void read()
    {
        cout<<"After Swap\na= "<<a<<" And b= "<<b<<endl;
    }
};
int main()
{
    Swap s(10,20);
    s.read();
}