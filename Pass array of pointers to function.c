#include <stdio.h>
void printStrings(char *arr[], int n){
    for(int i=0;i<n;i++) printf("%s\n",arr[i]);
}
int main() {
    char *arr[]={"one","two","three"};
    printStrings(arr,3);
    return 0;
}
