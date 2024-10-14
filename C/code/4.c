// WAP to read two integers from user and print both the numbers. Find their sum and assign it to third variable
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int a , b , sum;
    printf("Enter the 1st number : ");
    scanf("%d" , &a);
    printf("Enter the 2nd number : ");
    scanf("%d" , &b);
    
    sum =  a + b ;
    printf("The sum is %d" , sum);
    return 0;
}