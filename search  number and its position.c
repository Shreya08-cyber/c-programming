#include <stdio.h>
int main() {
    int arr[100], n, num, i, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter number to search: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            printf("Number %d found at position %d\n", num, i+1);
            found = 1;
        }
    }
    if(!found) printf("Number not found.\n");
    return 0;
}
