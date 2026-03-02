#include <stdio.h>
int sumNatural(int n) {
    return n * (n + 1) / 2;
}
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Sum = %d\n", sumNatural(n));
    return 0;
}
