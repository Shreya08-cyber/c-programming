#include <stdio.h>
int search(int *arr,int n,int key){
    for(int i=0;i<n;i++) if(*(arr+i)==key) return i;
    return -1;
}
int main(){
    int a[]={10,20,30,40};
    int pos=search(a,4,30);
    if(pos!=-1) printf("Found at %d\n",pos);
    else printf("Not found\n");
    return 0;
}
