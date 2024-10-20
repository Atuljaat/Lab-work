// Program to find simple interest in a function. Create function with arguments and return type
#include <stdio.h>
float calculateSimpleInterest(float principal, float rate, float time)
{
    float interest;
    interest = (principal * rate * time) / 100;
    return interest;
}
int main()
{
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    float principal, rate, time, interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    interest = calculateSimpleInterest(principal, rate, time);

    printf("The Simple Interest is: %.2f\n", interest);
    return 0;
}