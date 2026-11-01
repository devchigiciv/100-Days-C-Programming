#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char fileName[100];
    int ch;
    int vowels = 0;
    int consonants = 0;

    printf("Enter file name: ");
    scanf("%s", fileName);

    fp = fopen(fileName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file.");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        ch = tolower(ch);

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    fclose(fp);

    return 0;
}