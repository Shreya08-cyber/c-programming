#include <stdio.h>
struct Student {
    int id;
    char name[50];
    int marks;
};
int main() {
    struct Student arr[3] = { {1, "Alice", 85},{2, "Bob", 90}, {3, "Charlie", 78}
    };
    for(int i=0;i<3;i++)
        printf("ID:%d Name:%s Marks:%d\n", arr[i].id, arr[i].name, arr[i].marks);
    return 0;
}
