#include <stdio.h>
int strLength(char *s) {
    int len=0;
    while(*s!='\0'){ len++; s++; }
    return len;
}
int main() {
    char str[]="hello";
    printf("Length=%d\n",strLength(str));
    return 0;
}
