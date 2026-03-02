#include <stdio.h>

void reverseArray(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Reversed Array: ");
    reverseArray(arr, n);
    return 0;
}
