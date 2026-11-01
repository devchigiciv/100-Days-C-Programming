#include <stdio.h>

int main()
{
    int a[100], n, i, max;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ptr = a;
    max = *ptr;

    for(i = 1; i < n; i++)
    {
        if(*(ptr + i) > max)
            max = *(ptr + i);
    }

    printf("Largest = %d", max);

    return 0;
}