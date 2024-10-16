// To find maximum of three numbers by if else if statement

#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int num1 , num2 , num3 , maximum ; 
    printf("Enter the 3 numbers : ");
    scanf("%d %d %d" , &num1 , &num2 , &num3);

    if (num1 > num2 ){
        if ( num3 > num1){
            maximum = num3 ; 
        }
        else {
            maximum = num1 ;
        };

    } else if ( num2 > num1){
        if ( num3 > num2){
            maximum = num3 ; 
        }
        else {
            maximum = num2 ;
        }
    };

    printf("The maximum of three numbers %d , %d and %d is %d" , num1 , num2 , num3 , maximum);
    return 0;
}