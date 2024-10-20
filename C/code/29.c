// To read an integer and print sum of its digits using while loop. Construct and print reverse on n-digit number using do-while loop
#include <stdio.h>
int main()
{
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int number, digitSum = 0, tempNumber, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    tempNumber = number;
    while (tempNumber != 0)
    {
        digitSum += tempNumber % 10;
        tempNumber /= 10;
    }
    printf("Sum of digits: %d\n", digitSum);
    printf("Digits of the number (in reverse order): ");
    tempNumber = number;
    do
    {
        digit = tempNumber % 10;
        printf("%d", digit);
        tempNumber /= 10;
    } while (tempNumber != 0);
    printf("\n");
    return 0;
}