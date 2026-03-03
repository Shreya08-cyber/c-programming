#include <stdio.h>
struct Account
{int accNo; float balance;};
void deposit(struct Account *a,float amt)
{ a->balance+=amt; }
int main(){
    struct Account a={123,1000};
    deposit(&a,500);
    printf("Balance=%.2f\n",a.balance);
    return 0;
}
