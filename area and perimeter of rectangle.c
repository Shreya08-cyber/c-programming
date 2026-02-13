#include <stdio.h>
int main() {
    float l, w, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &w);
    area = l* w;
    perimeter = 2 * (l + w);
    printf("Area of the rectangle = %f\n", area);
    printf("Perimeter of the rectangle = %f\n", perimeter);
    return 0;
}
