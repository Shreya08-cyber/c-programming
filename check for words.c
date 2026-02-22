#include <stdio.h>
#include <string.h>
int main() {
    char message[200];
    int n;
    printf("Enter user message:\n");
    scanf(" %[^\n]", message); // read full line
    printf("Enter number of banned words:\n");
    scanf("%d", &n);
    char banned[20][50];
    printf("Enter banned words:\n");
    for (int i = 0; i < n; i++) scanf("%s", banned[i]);
    int count = 0;
    printf("Banned words detected:\n");
    for (int i = 0; i < n; i++) {
        if (strstr(message, banned[i])) {
            printf("%s\n", banned[i]);
            count++;
        }
    }
    printf("Total banned words found: %d\n", count);
    return 0;
}
