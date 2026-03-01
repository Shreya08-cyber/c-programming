#include <stdio.h>
#include <string.h>
int main() {
    char *arr[]={"banana","apple","cherry"};
    int n=3;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(arr[i],arr[j])>0){
                char *temp=arr[i]; arr[i]=arr[j]; arr[j]=temp;
            }
    for(int i=0;i<n;i++) printf("%s\n",arr[i]);
    return 0;
}
