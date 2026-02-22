#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200];
    printf("Sentence: ");
    scanf(" %[^\n]", sentence);
    char words[50][50];
    int freq[50] = {0}, count = 0;
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        int found = -1;
        for (int i = 0; i < count; i++) {
            if (strcmp(words[i], token) == 0) {
                found = i;
                break;
            }
        }
        if (found != -1) {
            freq[found]++;
        } else {
            strcpy(words[count], token);
            freq[count] = 1;
            count++;
        }
        token = strtok(NULL, " ");
    }
    int maxIndex = 0;
    for (int i = 1; i < count; i++) {
        if (freq[i] > freq[maxIndex]) maxIndex = i;
    }
    printf("Most frequent word: %s\n", words[maxIndex]);
    return 0;
}

