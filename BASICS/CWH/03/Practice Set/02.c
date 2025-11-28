// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.
#include <stdio.h>

int main()
{

    float a, b, c;
    printf("to determine whether a student has passed or failed\n");
    printf("Enter marks of 3 subjects:\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("Marks of 3 subjects are: %f %f %f\n", a, b, c);
    float marks = (a + b + c) / 3;
    if (marks > 40 && a>33 && b>33 && c>33)
    {
        printf("Marks of 3 subjects are: %f %f %f\n", a, b, c);
        printf("PASSED!");
    }
    else
    {
        printf("Marks of 3 subjects are: %f %f %f\n", a, b, c);
        printf("FAILED!");
    }
    

    return 0;
}