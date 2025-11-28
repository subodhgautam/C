#include <stdio.h>

int main() {
    printf("-----------Area of rectangle-----------------\n");
    printf("Enter length and breadth of rectangle\n");
    float l,b;    
    scanf(" %f %f", &l, &b);
    float area = l * b;
    printf("Area %.2f",area);
    return 0;
}