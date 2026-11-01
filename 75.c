#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    length = strlen(str);

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("String is palindrome.");
    else
        printf("String is not palindrome.");

    return 0;
}