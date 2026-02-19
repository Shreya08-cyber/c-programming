#include <stdio.h>
int main() {
    int n, i, arr[50], sum=0;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n;i++) sum+=arr[i];
    printf("Sum = %d", sum);
    return 0;
}
