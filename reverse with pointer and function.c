#include <stdio.h>
void reverse(char *s) {
    char *end=s; while(*end) end++;
    end--;
    while(s<end){ char temp=*s; *s=*end; *end=temp; s++; end--; }
}
int main() {
    char str[]="hello";
    reverse(str);
    printf("Reversed=%s\n",str);
    return 0;
}
