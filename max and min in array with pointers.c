#include <stdio.h>
int main() {
    int arr[]={5,2,9,1,7};
    int *p=arr;
    int max=*p, min=*p;
    for(int i=1;i<5;i++){
        if(*(p+i)>max) max=*(p+i);
        if(*(p+i)<min) min=*(p+i);
    }
    printf("Max=%d Min=%d\n",max,min);
    return 0;
}
