#include <stdio.h>
void copyStr(char *src, char *dest){
    while(*src){ *dest=*src; src++; dest++; }
    *dest='\0';
}
int main(){
    char s1[]="Hello", s2[20];
    copyStr(s1,s2);
    printf("Copied=%s\n",s2);
    return 0;
}
