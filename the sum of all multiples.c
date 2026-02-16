#include <stdio.h>
int main() {
    int x, limit;
    scanf("%d %d", &x, &limit);
    int sum = 0;
    for(int i = x; i <= limit; i += x) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
