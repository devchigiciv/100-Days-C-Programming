1#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[100];
    int num;
    int count = 0;
    int sum = 0;
    float average;

    printf("Enter file name: ");
    scanf("%s", fileName);

    fp = fopen(fileName, "r");

    if(fp == NULL)
    {
        printf("Unable to open file.");
        return 1;
    }

    while(fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    if(count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    else
    {
        printf("No integers found in the file.");
    }

    fclose(fp);

    return 0;
}