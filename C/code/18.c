// To find maximum of three numbers using Conditional operator

#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int num1 , num2 , num3 , maximum ; 
    printf("Enter the 3 numbers : ");
    scanf("%d %d %d" , &num1 , &num2 , &num3);

    maximum = (num1 > num2) ? num1 : num2 ;
    maximum = (maximum > num3) ? maximum : num3 ;

    printf("The maximum of three numbers %d , %d and %d is %d" , num1 , num2 , num3 , maximum);
    return 0;
}