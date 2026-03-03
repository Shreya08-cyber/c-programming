#include <stdio.h>
struct Date{int d,m,y;};
int compare(struct Date d1,struct Date d2){
    if(d1.y==d2.y && d1.m==d2.m && d1.d==d2.d) return 1;
    return 0;
}
int main(){
    struct Date d1={3,3,2026},d2={3,3,2026};
    if(compare(d1,d2)) printf("Equal\n"); else printf("Not Equal\n");
    return 0;
}
