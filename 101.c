#include <stdio.h>

int arraySum(int a[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Sum = %d", arraySum(a, n));

    return 0;
}