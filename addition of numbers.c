#include <stdio.h>
int main() {
    int l, w, area, perimeter;
    printf("Enter the length and width of the rectangle: ");
    scanf("%d%d", &l,&w);
    area = l* w;
    perimeter = 2 * (l + w);
    printf("Area of the rectangle = %d\n", area);
    printf("Perimeter of the rectangle = %d\n", perimeter);
    return 0;
}
