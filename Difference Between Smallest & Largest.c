#include <stdio.h>
int main() {
    int n,i,arr[50],min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    min=max=arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];
    }
    printf("Difference = %d", max-min);
    return 0;
}
