#include <stdio.h>
int main() {
    float p, r, t;
    scanf("%f %f %f", &p, &r, &t);
    printf("Simple Interest = %.2f\n", (p * r * t) / 100);
    return 0;
}
