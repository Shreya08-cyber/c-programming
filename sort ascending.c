#include <stdio.h>
int main() {
    int n,i,j,arr[50],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(j=0;j<n-1;j++)
      for(i=0;i<n-j-1;i++)
        if(arr[i]>arr[i+1]) {
            temp=arr[i]; arr[i]=arr[i+1]; arr[i+1]=temp;
        }
    for(i=0;i<n;i++) printf("%d ", arr[i]);
    return 0;
}
