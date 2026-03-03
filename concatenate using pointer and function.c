#include <stdio.h>
void concat(char *s1, char *s2){
    while(*s1) s1++;
    while(*s2){ *s1=*s2; s1++; s2++; }
    *s1='\0';
}
int main(){
    char a[30]="Good", b[]="Morning";
    concat(a,b);
    printf("%s\n",a);
    return 0;
}
