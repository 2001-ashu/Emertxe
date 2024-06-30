#include<iostream>
using namespace std;
class palindrome
{
    public:
    int rev=0,r;
    int check_palindrome(int num)
    {
        while(num!=0)
        {
            r=num%10;
            rev=(rev*10)+r;
            num=num/10;
        }
        return rev;
    } 
};
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int temp=num;
    palindrome p;

    int res=p.check_palindrome(num);
    cout<<res;
    if (res==temp)      

    {
        cout<<"It is a Palindrome"<<endl;
    }
    else{
        cout<<"It is not a Palindrome"<<endl;
    }
    
}