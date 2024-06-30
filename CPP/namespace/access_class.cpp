#include<iostream>
using namespace std;
namespace my_space
{
    class emp
    {
    public:
        int id;
        string name;
    };
}
class emp
{
public:
    int id;
    string name;
};
int main()
{
    emp emp1;
    my_space::emp em2;
    emp1.name = "Ashu";
        em2.name = "Rohan";

    cout << emp1.name << endl;
        cout << em2.name << endl;

}