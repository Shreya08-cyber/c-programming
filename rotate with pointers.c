#include <stdio.h>
int main() {
    int arr[5] = {1,2,3,4,5};
    int *p=arr;
    int last = *(p+4);
    for(int i=4;i>0;i--) *(p+i) = *(p+i-1);
    *p = last;
    for(int i=0;i<5;i++) printf("%d ", *(p+i));
    return 0;
}
