// WAP to print following patterns: triangle of '*' triangle of digits

#include <stdio.h>
int main()
{
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int n, i, j, p, q;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ", j);
        }
        printf("\n");
    }
    for (p = 1; p <= n; p++)
    {
        for (q = 1; q <= p; q++)
        {
            printf("%d ", q);
        }
        printf("\n");
    }

    return 0;
}