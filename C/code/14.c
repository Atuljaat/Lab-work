// To apply mathematical operation on ASCII value of character variables

#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int a , b , sum , diff , prod , quotient ;
    printf("Enter the first number :");
    scanf("%d" , &a);
    printf("Enter the second number :");
    scanf("%d" , &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;
    quotient = a / b;

    printf("Sum : %d\n" ,  sum);
    printf("Difference : %d\n" , diff);
    printf("Product : %d\n" , prod);
    printf("Quotient : %d" , quotient);

    return 0;
}