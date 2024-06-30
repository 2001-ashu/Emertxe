#include<iostream>
using namespace std;
int main() {    
    int x=10;
    int &r=x;
    cout << "Value of x is: "<< x << endl;  // Value of x is: 10
    r = 20;                              
    cout << "Value of x after assigning 20 to r :"<< x <<endl;   // Value of x after assigning 
}