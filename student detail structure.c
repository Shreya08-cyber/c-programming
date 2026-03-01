#include <stdio.h>
struct Student {
    int id;
    char name[50];
};
void readStudent(struct Student *s) {
    printf("Enter ID: ");
    scanf("%d", &s->id);
    printf("Enter Name: ");
    scanf("%s", s->name);
}
void printStudent(struct Student s) {
    printf("ID: %d, Name: %s\n", s.id, s.name);
}
int main() {
    struct Student s;
    readStudent(&s);
    printStudent(s);
    return 0;
}
