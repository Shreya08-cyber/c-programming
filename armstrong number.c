#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, rem, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    if(sum == n)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong number\n");
    return 0;
}
