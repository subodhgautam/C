#include <stdio.h>

int main() {
    printf("Enter a character\n");
    char ch;
    scanf("%c",&ch);
    if (ch >= 'a' && ch <= 'z')
    {
    printf("%c is a lowercase character\n",ch);
    }
    else
    {
            printf("%c is not a lowercase character\n",ch);
    } 
    return 0;
}