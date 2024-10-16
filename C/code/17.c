// To find maximum of two numbers by using Conditional operator
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int num1 , num2 , max;
    printf("Enter the two numbers : ");
    scanf("%d %d" , &num1 , &num2);
    max = (num1 > num2 ) ? num1 : num2 ;
    printf("The maximum from numbers %d and %d is %d" ,num1 , num2 , max); 

    return 0;
}