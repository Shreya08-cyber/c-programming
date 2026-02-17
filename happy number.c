#include <stdio.h>
int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num;
    while (result != 1 && result != 4) { 
        result = sumOfSquares(result);
    }

    if (result == 1)
        printf("Happy Number.\n");
    else
        printf("Not a Happy Number.\n");

    return 0;
}
