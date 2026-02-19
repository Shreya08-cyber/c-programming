#include <stdio.h>
int main() {
    int n,i,arr[50],odd=0,even=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n;i++) (arr[i]%2)? odd++ : even++;
    printf("Odd=%d Even=%d", odd, even);
    return 0;
}
