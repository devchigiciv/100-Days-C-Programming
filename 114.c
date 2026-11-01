#include <stdio.h>

int main()
{
    int n;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &n);

    ptr = &n;

    printf("Value = %d\n", *ptr);
    printf("Address = %p", (void *)ptr);

    return 0;
}