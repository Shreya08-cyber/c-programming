#include <stdio.h>
int main() {
    int arr[5] = {5,2,9,1,7};
    int *p = arr;
    for(int i=0;i<5-1;i++)
        for(int j=i+1;j<5;j++)
            if(*(p+i) > *(p+j)) {
                int temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
    for(int i=0;i<5;i++) printf("%d ", *(p+i));
    return 0;
}
