#include <stdio.h>
int factorial(int *n){
    if(*n==0) return 1;
    int temp=*n-1;
    return (*n)*factorial(&temp);
}
int main(){
    int num=5;
    printf("Factorial=%d\n",factorial(&num));
    return 0;
}
