#include<iostream>
#include<cstring>
using namespace std;
class default_constructor
{
    public:
    int id;
    char *name;
    default_constructor()
    {
        id=100;
        name=(char *)malloc(sizeof(char)*10);
    }
};
int main()
{
    default_constructor dc;
    cout<<"Id is:"<<dc.id<<endl;
    strcpy(dc.name,"Ashutosh");
    cout<<"My name is:"<<dc.name<<endl;
}