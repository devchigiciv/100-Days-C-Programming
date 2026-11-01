#include <stdio.h>

int main()
{
    int a, b, temp;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}