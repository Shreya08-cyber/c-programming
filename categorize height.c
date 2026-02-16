#include <stdio.h>
int main() {
    int h;
    scanf("%d", &h);
    if(h < 140)
        printf("Dwarf\n");
    else if(h <= 170)
        printf("Average\n");
    else
        printf("Taller\n");
    return 0;
}
