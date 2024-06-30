#include <stdio.h>
struct bank
{
    char name[50];
    char address[100];
    long long int mobile;
    float withdraw, a_with, balance, deposit, a_depo;
};
void getdata(struct bank *b)
{
    printf("\t****** Welcome To India Bank ******\n");
    printf("Enter Your Name : \n");
    scanf("%s", b->name);
again:
    printf("Enter Your Mobile Number : \n");

    scanf("%lld", &b->mobile);
    if (b->mobile < 7000000000 || b->mobile > 9999999999)
    {
        printf("It is Invalid \n");
        printf("Please Give Correct Mobile Number..\n");
        goto again;
    }

    printf("Enter Your Address : \n");
    scanf("%s", b->address);
}
void print(struct bank *b)
{
    printf("Account Holder  Name : %s\n", b->name);
    printf("Account Holder  Mobile no : %lld\n", b->mobile);

    printf("Account Holder  Address : %s\n", b->address);
}
void withdraw(struct bank *b)
{
    printf("Please Enter Your Withdraw Ammount : \n");
    scanf("%f", &b->withdraw);
    if (b->withdraw > b->balance)
    {
        printf("Insuffitieant Balance..\n");
        printf("Your Current Balance is : $%f \n", b->balance);
    }
    else
    {
        b->balance = b->balance - b->withdraw;
        printf("Withdraw Ammount Successfully..\n");
        printf("Your Current Balance is : $%f \n", b->balance);
    }
}
void deposit(struct bank *b)
{
    printf("Please Enter Your Deposit Ammount : \n");
    scanf("%f", &b->deposit);
    b->balance = b->balance + b->deposit;
    printf("Deposit Ammount Successfully..\n");
    printf("Your Current Balance is : $%f \n", b->balance);
}
int main()
{
    short opt;
    struct bank b;
    b.balance = 1000;
    getdata(&b);
    print(&b);
    while (1)
    {
        printf("Do You Want to continue  (yes-1 OR No-0) : \n");
        scanf("%d", &opt);
        if (opt == 1)
        {
            int c;
            printf("Choose Below Option\n1.Check Bank Balance\n2.Withdraw Ammount\n3.Deposit Ammount\n");
            scanf("%d", &c);
            if (c == 1)
            {
                printf("Your Current Balance is : $%f \n", b.balance);
            }
            else if (c == 2)
            {
                withdraw(&b);
            }
            else
            {
                deposit(&b);
            }
        }
        else
        {
            printf("Thank You For Visiting Us\n");
            break;
        }
    }
}