// Program to generate reverse array for a given array
#include <stdio.h>
int main()
{
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int reversed[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        reversed[i] = arr[n - 1 - i];
    }
    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
};
