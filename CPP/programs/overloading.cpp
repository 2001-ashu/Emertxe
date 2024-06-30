#include<iostream>
#include<cstring>
using namespace std;
/* In c++,
1.Function declaration that differ only in the return type.
2.member function declaration with the same name and the same 
parameter type-list cant be over loaded if any of the member is
 a static member function declaration.

*/ 
class overloading
{
    public:
    void add(int x,int y)
    {
        cout<<"Num1+Num2="<<x+y<<endl;
    }
    void add(int x,int y,int z)

    {
        cout<<"Num1+Num2+Num3="<<x+y+z<<endl;
    }
    void add(int v,int x,int y,int z)

    {
        cout<<"Num1+Num2+Num3+Num4="<<v+x+y+z<<endl;
    }
}; 
int main()
{
    overloading O;
    O.add(12,2);
    O.add(12,22,2);
    O.add(23,2,1,3);

}