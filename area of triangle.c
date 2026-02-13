#include <stdio.h>
int main()
{
    float b, h, area;
    printf("Enter base of the triangle: ");
    scanf("%f", &b);
    printf("Enter height of the triangle: ");
    scanf("%f", &h);
    area = 0.5 * b * h;
    printf("Area of the triangle = %f\n", area);
    return 0;
}
