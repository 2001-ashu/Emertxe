#include<iostream>
using namespace std;
namespace gloabl
{
    int a=10;
    int b=20;
    int sum=a+b;
}
int main()
{
    //using namespace gloabal (We can use this line to replace cout syntax)
    cout<<"Sum of global variables = "<<gloabl::sum<<endl;
}