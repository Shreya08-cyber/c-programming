#include <stdio.h>
struct Employee{int id; char name[20];};
void show(struct Employee e)
{ printf("%d %s\n",e.id,e.name); }
int main(){
    struct Employee emp[2]={{1,"A"},{2,"B"}};
    for(int i=0;i<2;i++) show(emp[i]);
    return 0;
}
