#include <stdio.h>
void printTable(int m, int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", m, i, m * i);
    }
}
int main() {
    int m, n;
    printf("Enter number m and limit n: ");
    scanf("%d %d", &m, &n);
    printTable(m, n);
    return 0;
}
