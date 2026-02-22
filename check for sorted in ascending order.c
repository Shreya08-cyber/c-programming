#include <stdio.h>
int main() {
    int arr[100], n, i, flag = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Array is sorted in ascending order.\n");
    else
        printf("Array is not sorted in ascending order.\n");
    return 0;
}
