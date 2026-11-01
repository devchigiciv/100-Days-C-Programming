1#include <stdio.h>

int stringLength(char str[])
{
    int i = 0;

    while(str[i] != '\0')
        i++;

    return i;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length = %d", stringLength(str));

    return 0;
}