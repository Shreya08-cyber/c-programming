#include <stdio.h>
struct Student {
    int id;
    char name[50];
    int marks[3];
};
int main() {
    struct Student s = {1, "Alice", {80, 90, 85}};
    int total = s.marks[0] + s.marks[1] + s.marks[2];
    float avg = total / 3.0;
    printf("Total: %d, Average: %.2f\n", total, avg);
    return 0;
}
