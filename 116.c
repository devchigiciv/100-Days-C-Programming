#include <stdio.h>

int main()
{
    int a[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ptr = a;

    printf("Array elements:\n");

    for(i = 0; i < n; i++)
        printf("%d ", *(ptr + i));

    return 0;
}