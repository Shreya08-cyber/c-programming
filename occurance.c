#include <stdio.h>
#include <string.h>
int main()
 {
    char sequence[1000], pattern[100];
    printf("Enter DNA sequence:\n");
    scanf("%s", sequence);
    printf("Enter DNA pattern:\n");
    scanf("%s", pattern);
    int seqLen = strlen(sequence), patLen = strlen(pattern);
    int count = 0;
    printf("Pattern found at positions: ");
    for (int i = 0; i <= seqLen - patLen; i++)
 {
        if (strncmp(&sequence[i], pattern, patLen) == 0)
 {
            printf("%d ", i + 1); 
            count++;
        }
    }
    printf("\nTotal occurrences: %d\n", count);
    return 0;
}

