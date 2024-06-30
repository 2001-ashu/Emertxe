#include <iostream>
#include <cstring>
using namespace std;
static int balance = 10000;
class OpenAccount
{
protected:
    int acc_no = 1234;
    int pin = 111;

public:
    string name; // customer's name
    int age;
    char mobile[10];

    void getDetails() // function to get user details
    {
        cout << "Enter the account holder's name : ";
        cin >> name;
        cout << "\nEnter the account holder's age : ";
        cin >> age;
        cout << "\nEnter the account holder's mobile number : ";
        cin >> mobile;
    }
    void showDetails() // function to display user details
    {
        cout << "\nName of the account holder is : " << name;
        cout << "\nAge of the account holder is :" << age;
        cout << "\nMobile number of the account holder is :" << mobile << endl;
        cout << "Account Number = " << acc_no << "\nBalance = Rs." << balance << endl;
    }
};
class Deposit : public OpenAccount
{
public:
    int p;
    int ac;
    int amount;
    int n;
    void depo()
    {
        cout << "Please Enter Your Pin:" << endl;
        cin >> p;
        if (pin == p)
        {
            cout << "\nHow much do you want to deposite?\n";
            cin >> amount;
            balance = balance + amount;
            cout << "\nDeposited Successfully!\nYour Current Balance is=" << balance << endl;
        }
        else
        {
            cout << "Your pin wrong:Try Again!!" << endl;
        }
    }

    void change_pin()
    {
        cout << "Please give your Account No:";
        cin >> ac;
        if (ac == acc_no)
        {
            cout << "Please Insert Your New pin:";
            cin >> n;
            pin = n;
            cout << "\nPin Changed Succesfully!!" << endl;
        }
    }
};
class withdraw : public Deposit
{
public:
    float wamount;
    void withdrow()
    {
        cout << "Enter the Amount You Want To Withdraw:\t";
        cin >> wamount;
        if (wamount > balance)
        {
            cout << "Insufficient Balance!!\n";
        }
        else
        {
            balance = balance - wamount;
            cout << "Amount Withdrawn Successfully!\nYour Remaining Balance Is=" << balance << endl;
        }
    }
};

int main()
{
    OpenAccount ac;
    Deposit dp;
    withdraw wd;
    int ch;
    char k;
    while (1)
    {
        cout << "1.Open an account\n2.Show account details\n3.Deposit\n4.Withdraw\n5.Change Pin\n6.Exit" << endl;
        cin >> ch;
        if (ch == 1)
        {

            ac.getDetails(); // calling function to get user details
        }
        else if (ch == 2)
        {

            ac.showDetails();
        }
        else if (ch == 3)
        {
            dp.depo(); // calling the function for depositing
        }
        else if (ch == 4)
        {
            wd.withdrow(); // calling the withdrawal function
        }

        else if (ch == 5)
        {
            dp.change_pin(); // calling the function to change pin
        }
        else
        {
            cout << "Thank You,Have a nice Day..." << endl;
            break;
        }

        cout << "Do you want to continue (Y/y)" << endl;
        cin >> k;
        if(k=='y' || k=='Y')
        {
            continue;
        }
        else{
            break;
        }
        
    }
}