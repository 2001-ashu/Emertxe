#include <iostream>
using namespace std;
class Smartphone
{
  public:
  virtual void TakeASelfi()=0;
  virtual void calling()=0;
};
class Android:public Smartphone
{
  public:
  void TakeASelfi()
  {
      cout<<"Click Selfi..By Android"<<endl;
  }
  void calling()
  {
      cout<<"Hello Ashu..By Android"<<endl;
  }
};
class Iphone:public Smartphone
{
      public:
  void TakeASelfi()
  {
      cout<<"Click Selfi..By Iphone"<<endl;
  }
  void calling()
  {
      cout<<"Hello Ashu..By Iphone"<<endl;
  }
    
};

int main() 
{
    // Write C++ code here
    int ch;
    cout<<"1.Android\n2.Iphone\nChoose Any One:";
    cin>>ch;
    
    Smartphone *a1=new Android;
    Smartphone *i1=new Iphone;
    if(ch==1)
    {
    a1->TakeASelfi();
    a1->calling();
    }
    else if(ch==2)
    {
    i1->TakeASelfi();
    i1->calling();
    }
        
    else
    {
    cout<<"Invalid Choice.."<<endl;
}
    return 0;
}