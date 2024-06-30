#include<iostream>
#include<cstring>
using namespace std;
class patameterized
{
    public:
    int id;
    char *name;
    patameterized(int x,char *s)
    {
    id=x;
    //name=(char *)malloc(sizeof(char)*10);
    name=new char[10];
    strcpy(name,s);
}

};
// patameterized::patameterized(int x,char *s)
// {
//     id=x;
//     name=(char *)malloc(sizeof(char)*10);
//     strcpy(name,s);
// }
int main()
{
    patameterized P(25,(char *)"Ashu");
    cout<<"My id is:"<<P.id<<endl;
    cout<<"My name is:"<<P.name<<endl;
}