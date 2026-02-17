#include <stdio.h>
int main() {
    int num, lower, upper;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter lower bound: ");
    scanf("%d", &lower);
    printf("Enter upper bound: ");
    scanf("%d", &upper);
    if (num >= lower && num <= upper) {
        printf("%d is within the range %d to %d\n", num, lower, upper);
    } else {
        printf("%d is outside the range %d to %d\n", num, lower, upper);
    }
    return 0;
}
