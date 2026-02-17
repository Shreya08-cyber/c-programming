#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int square = num * num;
    int digits = (int)log10(num) + 1;
    int lastDigits = square % (int)pow(10, digits);
    if (lastDigits == num)
        printf("Automorphic Number.\n");
    else
        printf("Not Automorphic.\n");
    return 0;
}
