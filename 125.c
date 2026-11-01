#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[100];
    char text[500];

    printf("Enter file name: ");
    scanf("%s", fileName);

    fp = fopen(fileName, "a");

    if(fp == NULL)
    {
        printf("Unable to open file.");
        return 1;
    }

    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    printf("Text appended successfully.");

    fclose(fp);

    return 0;
}