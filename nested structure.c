#include <stdio.h>
struct Address
{char city[20];};
struct Student
{int roll; struct Address addr;};
void display
(struct Student s)
{ printf("%d %s\n",s.roll,s.addr.city); }
int main()
{ struct Student s={101,{"Chennai"}}; display(s); return 0; }
