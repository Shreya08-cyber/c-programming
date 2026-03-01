#include <stdio.h>
int main() {
    int arr[5] = {10,20,30,40,50};
    int *p = arr, key=30, found=0;
    for(int i=0;i<5;i++) {
        if(*(p+i)==key){ found=1; break; }
    }
    if(found) printf("Element %d found\n", key);
    else printf("Element not found\n");
    return 0;
}
