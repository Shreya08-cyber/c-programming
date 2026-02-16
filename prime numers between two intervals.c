#include <stdio.h>
int main() {
    int low, high;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are:\n", low, high);
    for(int num = low; num <= high; num++) {
        int flag = 0;
        if(num <= 1) continue;
        for(int i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", num);
    }
    return 0;
}
