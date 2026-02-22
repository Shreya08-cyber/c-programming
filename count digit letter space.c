#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    printf("String: ");
    scanf(" %[^\n]", str);
    int letters = 0, digits = 0, spaces = 0;
    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) letters++;
        else if (isdigit(str[i])) digits++;
        else if (isspace(str[i])) spaces++;
    }
    printf("Letters: %d\nDigits: %d\nSpaces: %d\n", letters, digits, spaces);
    return 0;
}

