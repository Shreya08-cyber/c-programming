#include <stdio.h>
int main() {
    int n,i,arr[50],key,found=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);
    for(i=0;i<n;i++) if(arr[i]==key) { found=1; break; }
    printf(found? "Found":"Not Found");
    return 0;
}
