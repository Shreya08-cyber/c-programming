#include <stdio.h>
int main() {
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);
    for(int i = m; i <= n; i += (k + 1)) {
        printf("%d ", i);
    }
    return 0;
}
