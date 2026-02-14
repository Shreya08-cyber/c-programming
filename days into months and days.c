#include <stdio.h>
int main() {
    int a, months, days;
    scanf("%d", &a);
    months = a / 30;         
    days = a % 30;
    printf("%d days = %d months and %d days\n", a, months,days);
    return 0;
}
