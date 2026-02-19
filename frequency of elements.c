#include <stdio.h>
int main() {
    int n,i,j,count,arr[50];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        count=1;
        if(arr[i]!=-1) {
            for(j=i+1;j<n;j++) {
                if(arr[i]==arr[j]) { count++; arr[j]=-1; }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
    return 0;
}
