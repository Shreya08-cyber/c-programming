#include <stdio.h>
int isEqual(int a, int b) {
    return a == b;
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (isEqual(x, y))
        printf("Numbers are Equal\n");
    else
        printf("Numbers are Not Equal\n");

    return 0;
}
