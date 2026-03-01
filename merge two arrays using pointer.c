#include <stdio.h>
int main() {
    int arr1[3] = {1,2,3}, arr2[3] = {4,5,6}, arr3[6];
    int *p1=arr1, *p2=arr2, *p3=arr3;
    for(int i=0;i<3;i++) *(p3+i) = *(p1+i);
    for(int i=0;i<3;i++) *(p3+3+i) = *(p2+i);
    for(int i=0;i<6;i++) printf("%d ", *(p3+i));
    return 0;
}
