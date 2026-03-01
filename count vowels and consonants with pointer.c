#include <stdio.h>
#include <ctype.h>
int main() {
    char str[]="Hello World";
    char *p=str;
    int v=0,c=0;
    while(*p){
        char ch=tolower(*p);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
        else if(isalpha(ch)) c++;
        p++;
    }
    printf("Vowels=%d Consonants=%d\n",v,c);
    return 0;
}
