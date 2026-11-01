#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int alphabet = 0, digit = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            alphabet++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else if(str[i] != '\n')
        {
            special++;
        }
    }

    printf("Alphabets = %d\n", alphabet);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d\n", special);

    return 0;
}