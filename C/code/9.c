// To swap two numbers using third variable
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int a , b , c ; 
    printf("Enter the two numbers : ");
    scanf("%d %d" , &a , &b);

    printf("Before swapping the value of a = %d and b = %d\n" , a , b);
    c = a ;
    a = b ;
    b = c ;

    printf("After swapping the value of a = %d and b = %d" , a , b);

    return 0;
}