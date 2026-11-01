#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], longest[100], current[100];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            current[j++] = str[i];
        }
        else
        {
            current[j] = '\0';

            if(j > maxLength)
            {
                maxLength = j;
                strcpy(longest, current);
            }

            j = 0;

            if(str[i] == '\0')
                break;
        }

        i++;
    }

    printf("Longest word = %s\n", longest);
    printf("Length = %d", maxLength);

    return 0;
}