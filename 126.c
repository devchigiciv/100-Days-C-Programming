#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[100];
    int ch;

    printf("Enter file name: ");
    scanf("%s", fileName);

    fp = fopen(fileName, "r");

    if(fp == NULL)
    {
        printf("Error: File does not exist.");
        return 1;
    }

    printf("File exists.\n");
    printf("File content:\n");

    while((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}