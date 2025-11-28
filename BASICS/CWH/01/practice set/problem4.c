#include <stdio.h>

int main() {
    printf("------------------------------------------------------------------------------------\n");
    printf("Enter principle, rate and time :");
    float principle,rate,time,interest;
    scanf("%f%f%f",&principle,&time,&rate);
    interest = (principle*time*rate)/100;
    printf("the simple interest is %.2f", interest);
    printf("\n-----------------------------------------------------------------------------------");
    return 0;
}