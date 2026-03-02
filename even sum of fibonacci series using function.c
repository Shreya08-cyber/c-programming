#include <stdio.h>
int evenFiboSum(int N) {
    int a = 0, b = 1, sum = 0;
    while (a <= N) {
        if (a % 2 == 0)
            sum += a;
        int next = a + b;
        a = b;
        b = next;
    }
    return sum;
}
int main() {
    int N;
    printf("Enter limit N: ");
    scanf("%d", &N);

    printf("Even Fibonacci Sum = %d\n", evenFiboSum(N));
    return 0;
}
