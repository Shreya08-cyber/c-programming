#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("Largest = %d\n", a);
    else
        printf("Largest = %d\n", b);
    if (a < b)
        printf("Smallest = %d\n", a);
    else
        printf("Smallest = %d\n", b);
    return 0;
}
