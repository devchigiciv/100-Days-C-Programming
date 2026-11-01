#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int upper = 0, lower = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            upper++;

        else if(str[i] >= 'a' && str[i] <= 'z')
            lower++;
    }

    printf("Uppercase characters = %d\n", upper);
    printf("Lowercase characters = %d\n", lower);

    return 0;
}