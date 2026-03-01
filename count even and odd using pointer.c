#include <stdio.h>
int main() {
    int arr[6] = {1,2,3,4,5,6};
    int *p = arr, even=0, odd=0;
    for(int i=0;i<6;i++) {
        if(*(p+i)%2==0) even++;
        else odd++;
    }
    printf("Even=%d Odd=%d\n", even, odd);
    return 0;
}
