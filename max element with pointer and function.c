#include <stdio.h>
int maxElement(int *arr,int n){
    int max=*arr;
    for(int i=1;i<n;i++) if(*(arr+i)>max) max=*(arr+i);
    return max;
}
int main(){
    int a[]={10,25,5,30,12};
    printf("Max=%d\n",maxElement(a,5));
    return 0;
}
