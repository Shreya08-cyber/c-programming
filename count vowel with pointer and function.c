#include <stdio.h>
int countVowels(char *s){
    int c=0;
    while(*s){
        if(*s=='a'||*s=='e'||*s=='i'||*s=='o'||*s=='u'||
           *s=='A'||*s=='E'||*s=='I'||*s=='O'||*s=='U') c++;
        s++;
    }
    return c;
}
int main(){
    char str[]="Pointer Functions";
    printf("Vowels=%d\n",countVowels(str));
    return 0;
}
