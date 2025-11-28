#include <stdio.h>

int main() {
    printf("Enter a number to check if divisible by 97 or not:");
    int n;
    scanf("%d",&n);
    if (n%97==0)
    {
            printf("%d is divisible by 97",n);

    }
    return 0;
}