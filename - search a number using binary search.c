#include <stdio.h>
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = (low + high)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main() {
    int arr[100], n, key, i;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter number to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, n, key);
    if(result != -1) printf("Found at position %d\n", result+1);
    else printf("Not found.\n");
    return 0;
}
