#include <stdio.h>
int main() {
    int arr1[5] = {10,20,30,40,50};
    int arr2[5];
    int *p1 = arr1, *p2 = arr2;
    for(int i=0;i<5;i++) *(p2+i) = *(p1+i);
    for(int i=0;i<5;i++) printf("%d ", arr2[i]);
    return 0;
}
