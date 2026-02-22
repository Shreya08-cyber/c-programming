#include <stdio.h>
#include <string.h>
#include <ctype.h>
void toLowerCase(char *str) 
{
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string:\n");
    scanf("%s", str1);
    printf("Enter second string:\n");
    scanf("%s", str2);
    toLowerCase(str1);
    toLowerCase(str2);
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are not properly connected.\n");
        return 0;  }
    int freq[256] = {0};
    for (int i = 0; str1[i]; i++) freq[(unsigned char)str1[i]]++;
    for (int i = 0; str2[i]; i++) freq[(unsigned char)str2[i]]--;
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("The strings are not properly connected.\n");
            return 0; } }
    printf("The strings are properly connected.\n");
    return 0;}
