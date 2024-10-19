// WAP to read two integers and an operator (+,-,*,/,%). Use switch-case statement to get result of operator on two integers.
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int num1 , num2;
    char operator;
    printf("Enter the two numbers : ");
    scanf("%d %d" , &num1 , &num2);
    printf("Enter the operator : ");
    scanf(" %c" , &operator);
    switch (operator)
    {
    case 'a':
        printf("The sum of %d and %d is %d" , num1 , num2 , num1+num2);
        break;
    case 's':
        printf("The difference of %d and %d is %d" , num1 , num2 , num1-num2);
        break;
    case 'm':
        printf("The product of %d and %d is %d" , num1 , num2 , num1*num2);
        break;
    case 'd': 
        printf("The division of %d and %d is %d" , num1 , num2 , num1/num2);
        break;
    default:
        printf("Invalid operator");
        break;
    }
    return 0;
}