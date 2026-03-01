#include <stdio.h>
int main() {
    int arr[6] = {10,20,5,40,30,25};
    int *p=arr;
    int max1=*p, max2=*p;
    for(int i=1;i<6;i++){
        if(*(p+i)>max1){
            max2=max1;
            max1=*(p+i);
        } else if(*(p+i)>max2 && *(p+i)!=max1){
            max2=*(p+i);
        }
    }
    printf("Second Largest=%d\n", max2);
    return 0;
}
