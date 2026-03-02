#include <stdio.h>
#include <ctype.h>

int countConsonants(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if ((ch >= 'a' && ch <= 'z') && !(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
            count++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Consonant Count = %d\n", countConsonants(str));
    return 0;
}
