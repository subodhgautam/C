#include <stdio.h>

int main() {
    printf("Enter radius of circle:\t");
    float radius;
    scanf("%f",&radius);
    float area = (22/7)*radius*radius;
    printf("Area of circle:%.2f", area);

    printf("\n===================\n");
    printf( "for volume of cylinder \n");
     printf("Enter height of cylinder:");
    float height;
    scanf("%f",&height);
     printf("Volume of cylinder:%f",area*height );

    return 0;
}