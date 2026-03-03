#include <stdio.h>

struct Student {
    char name[30];
    int age;
};

void updateAge(struct Student *s) {
    age += 1; 
}

int main() {
    struct Student st = {"Shreya", 20};
    updateAge(&st); 
    printf("Updated Age: %d\n", st.age);
    return 0;
}
