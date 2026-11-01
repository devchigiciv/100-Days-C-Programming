#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length;

    printf("Enter a string: ");
    scanf("%99s", str);

    length = strlen(str);

    printf("Reverse string = ");

    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}   