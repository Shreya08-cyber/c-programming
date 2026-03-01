#include <stdio.h>
int main() {
    char str[]="hello";
    char *p=str;
    int len=0;
    while(*p){ len++; p++; }
    printf("Length=%d\n",len);
    return 0;
}
