#include <stdio.h>
struct Complex{int r,i;};
struct Complex add(struct Complex a,struct Complex b){
    struct Complex c; c.r=a.r+b.r; c.i=a.i+b.i; return c;
}
int main(){
    struct Complex c1={2,3},c2={4,5},c3;
    c3=add(c1,c2);
    printf("Sum=%d+%di\n",c3.r,c3.i);
    return 0;
}
