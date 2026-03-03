#include <stdio.h>
struct Student{int roll; float marks;};
void show(struct Student *s){ printf("%d %.2f\n",s->roll,s->marks); }
int main(){ struct Student s={101,95.5}; show(&s); return 0; }
