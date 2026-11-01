#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ptr = a;

    for(i = 0; i < n; i++)
        sum += *(ptr + i);

    printf("Sum = %d", sum);

    return 0;
}