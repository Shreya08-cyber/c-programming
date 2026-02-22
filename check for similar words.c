#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s1[200], s2[200];
    char words1[50][50], words2[50][50];
    int i, j, count1 = 0, count2 = 0, found;
    printf("Enter first sentence:\n");
    scanf(" %[^\n]", s1);
    printf("Enter second sentence:\n");
    scanf(" %[^\n]", s2);
    for (i = 0; s1[i]; i++) s1[i] = tolower(s1[i]);
    for (i = 0; s2[i]; i++) s2[i] = tolower(s2[i]);
    char *tok = strtok(s1, " ");
    while (tok != NULL) {
        strcpy(words1[count1++], tok);
        tok = strtok(NULL, " ");
    }
    tok = strtok(s2, " ");
    while (tok != NULL) {
        strcpy(words2[count2++], tok);
        tok = strtok(NULL, " ");  }
    if (count1 != count2) {
        printf("The sentences are not similar.\n");
        return 0; }
    for (i = 0; i < count1; i++) {
        found = 0;
        for (j = 0; j < count2; j++) {
            if (strcmp(words1[i], words2[j]) == 0) {
                strcpy(words2[j], "*"); // mark used
                found = 1;
                break;
            }}
        if (!found) {
            printf("The sentences are not similar.\n");
            return 0;
        }
    }
    printf("The sentences are similar.\n");
    return 0;
}
