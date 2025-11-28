#include <stdio.h>

int main()
{
    printf("Enter 4 numbers.");
    int a, b, c, d;
    int great;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        great = a;
    }
    else if (b > a && b > c && b > d)
    {
        great = b;
    }
    else if (c > a && c > b && c > d)
    {
        great = c;
    }
    else
    {
        great = d;
    }
printf("\n%d is the greatest among the four numbers.",great);
    return 0;
}