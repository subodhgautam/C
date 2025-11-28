// Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.
#include <stdio.h>
int main()
{
    int year;
    printf("enter a year");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("\nThe year %d is leap year ", year);
    }
    return 0;
}