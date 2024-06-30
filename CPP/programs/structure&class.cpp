#include<iostream>
using namespace std;
struct sEmp
{
    int id;
    string name;
};
class cEmp
{
    int id;
    string name;
};
int main()
{
    struct sEmp s;
    //cEmp c;
    s.id=12;        //its allowed because structure varible are default public
  //  c.id=13;        //its not allowed because class varible are default private
}