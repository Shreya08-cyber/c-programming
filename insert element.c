#include <stdio.h>
int main() {
    int n,i,pos,val,arr[50];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d%d",&pos,&val);
    for(i=n;i>=pos;i--) arr[i]=arr[i-1];
    arr[pos-1]=val; n++;
    for(i=0;i<n;i++) printf("%d ", arr[i]);
    return 0;
}
