#include <stdio.h>
struct Student {
    int id;
    char name[50];
    int marks;
};
int main() {
    struct Student arr[3] = {{1, "Alice", 85}, {2, "Bob", 90}, {3, "Charlie", 78}
    };
    int max=arr[0].marks, idx=0;
    for(int i=1;i<3;i++)
        if(arr[i].marks>max){ max=arr[i].marks; idx=i; }
    printf("Topper: %s with %d marks\n", arr[idx].name, arr[idx].marks);
    return 0;
}
