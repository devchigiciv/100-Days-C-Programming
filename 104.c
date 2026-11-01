#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int i;
    int n = strlen(str);

    for(i = n - 1; i >= 0; i--)
        printf("%c", str[i]);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reverse = ");
    reverseString(str);

    return 0;
}