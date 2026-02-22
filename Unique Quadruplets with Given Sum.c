#include <stdio.h>
int main() {
    int arr[100], n, target, i, j, k, l;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter target sum: ");
    scanf("%d", &target);
    printf("Quadruplets:\n");
    for(i = 0; i < n-3; i++) {
        for(j = i+1; j < n-2; j++) {
            for(k = j+1; k < n-1; k++) {
                for(l = k+1; l < n; l++) {
                    if(arr[i] + arr[j] + arr[k] + arr[l] == target) {
                        printf("%d %d %d %d\n", arr[i], arr[j], arr[k], arr[l]);
                    }
                }
            }
        }
    }
    return 0;
}
