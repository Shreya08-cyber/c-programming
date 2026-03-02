#include <stdio.h>

int isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    printf(isLeapYear(year) ? "Leap Year\n" : "Not Leap Year\n");
    return 0;
}
