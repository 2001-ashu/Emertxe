#include<iostream>
using namespace std;
template <class T>
class mytemplete
{
    T element;
    public:
    mytemplete(T arg)
    {
        element=arg;
    }
    T divideBy2()
    {
        return element/2;
    }
};
int main()
{
    mytemplete<int> m(10);
    cout<<"Divided by 2 : "<<m.divideBy2()<<endl;
    mytemplete<float> m1(10.50f);
    cout<<"Divided by 2 : "<<m1.divideBy2()<<endl;

}