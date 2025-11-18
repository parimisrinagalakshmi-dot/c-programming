#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf("Enter four values: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
        printf("a is the biggest\n");
    else if (b > c && b > d)
        printf("b is the biggest\n");
    else if (c > d)
        printf("c is the biggest\n");
    else
        printf("d is the biggest\n");

    return 0;
}

