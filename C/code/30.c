// To determine if given number is prune or composite
#include <stdio.h>
int main()
{
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    int n, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            ;
            count++;
        }
    }
    if (count == 0)
        printf("Number is Prime");
    else
        printf("Number is composite");
    return 0;
}