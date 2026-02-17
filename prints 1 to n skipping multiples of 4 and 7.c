#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0 || i % 7 == 0) {
            continue; // skip multiples of 4 or 7
        }
        printf("%d ", i);
    }
    return 0;
}
