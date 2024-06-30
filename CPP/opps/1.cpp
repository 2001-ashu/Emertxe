#include<iostream>
using namespace std;
class batsman
{
    private:
    int batsmannum,innings,notout,runs;
    
    string batsmanname;
    public:
    void read_data()
    {
        cout<<"Enter the Batsman Number: ";
        cin>>batsmannum;
        cout<<"Enter Batsman Name: ";
        cin>>batsmanname;
        cout<<"How many Innings play by "<<batsmanname<<"is :";
        cin>>innings;
        cout<<"How many times Batsman notout: ";
        cin>>notout;
        cout<<"Total Runs for that batsman : ";
        cin>>runs;
        
    }
    void display()
    {
        cout<<"4 digits code number :"<<batsmannum<<endl;
        cout<<"Batsman Name is: "<<batsmanname<<endl;
        cout<<"Number of innings played :"<<innings<<endl;
        cout<<"Number of notout :"<<notout<<endl;
        cout<<"Total number of runs scored :"<<runs<<endl;
        cout<<"Average of batting : "<<runs/(innings-notout);
    }
};
int main()
{
    batsman b;
    b.read_data();
    b.display();
}