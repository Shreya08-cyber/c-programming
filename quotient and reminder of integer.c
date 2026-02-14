#include <stdio.h>
int main() {
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    q = a / b;
    r = a % b;
    printf("Quotient = %d\n", q);
    printf("Remainder = %d\n", r);
    return 0;
}
