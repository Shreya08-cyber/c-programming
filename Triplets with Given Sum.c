#include <stdio.h>
int main() {
    int arr[100], n, target, i, j, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter target sum: ");
    scanf("%d", &target);
    printf("Triplets:\n");
    for(i = 0; i < n-2; i++) {
        for(j = i+1; j < n-1; j++) {
            for(k = j+1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == target) {
                    printf("%d %d %d\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    return 0;
}
