// To print sum of series: 1+1/2+.....+1/n
#include <stdio.h>
int main()
{
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int n, i;
    float sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += (float)1 / i;
        printf("1/%d ", i);
    }
    printf("\nSum of series is %f", sum);
    return 0;
}