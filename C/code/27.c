// WAP to generate multiplication tables using do-while statements
#include <stdio.h>
int main()
{
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i = 1;
    do
    {
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);
    return 0;
}