#include <stdio.h>

int main() {
    printf("Enter celcius:");
    float celcius;
    scanf("%f",&celcius);
    float converted = (9.0/5.0)*celcius+32;
    printf("In fahrenheight:%.2f",converted);
    return 0;
}