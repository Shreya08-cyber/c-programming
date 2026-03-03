#include <stdio.h>
struct Student {
    char name[30];
    int age;
};
void display(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
}
int main() {
    struct Student st = {"Shreya", 20};
    display(st);  
    return 0;
}
