#include <stdio.h>
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = num;
    while (result > 9) {
        result = digitSum(result);
    }
    if (result == 1)
        printf("Magic Number.\n");
    else
        printf("Not a Magic Number.\n");
    return 0;
}
