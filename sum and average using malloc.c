#include <stdio.h>
#include <stdlib.h>
int main() {
    int n=5;
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) arr[i]=i+1;
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    printf("Sum=%d Avg=%.2f\n",sum,(float)sum/n);
    free(arr);
    return 0;
}
