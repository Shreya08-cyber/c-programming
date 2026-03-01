#include <stdio.h>
#include <string.h>
int main() {
    char s1[]="apple", s2[]="apple";
    char *p1=s1, *p2=s2;
    while(*p1 && *p2 && *p1==*p2){ p1++; p2++; }
    if(*p1==*p2) printf("Equal\n");
    else printf("Not Equal\n");
    return 0;
}
