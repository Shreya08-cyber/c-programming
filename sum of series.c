#include <stdio.h>
double sumseries(double);
main()
{
double number,sum;
printf("\n Enter the value: ");
scanf("%lf", &number);
sum = sumseries(number);
printf("\n Sum of the above series = %lf ", sum);
}
double sumseries(double n)
{
double sum = 0, f = 1, i;
for (i = 1; i <= n; i++)
{
f = f * i;
sum = sum + (i / f);
}
return(sum);
}
