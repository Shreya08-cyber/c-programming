#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);
    printf("Composite numbers up to %d:\n", limit);
    for (int i = 4; i <= limit; i++) {  // start from 4 (first composite)
        if (!isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
