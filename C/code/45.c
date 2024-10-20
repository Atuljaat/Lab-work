// perform Linear search on an array.
#include <stdio.h>
int main()
{
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int n, i, searchElement, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == searchElement)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("Element %d found at position %d.\n", searchElement, i + 1);
    }
    else
    {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}