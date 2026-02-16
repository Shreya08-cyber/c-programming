#include <stdio.h>
int main() {
    int n;
    printf("Enter count: ");
    scanf("%d", &n);
    double sum = 0;
    for(int i = 0; i < n; i++) {
        double num;
        scanf("%lf", &num);
        sum += num;
    }
    printf("Average = %.2lf\n", sum / n);
    return 0;
}
