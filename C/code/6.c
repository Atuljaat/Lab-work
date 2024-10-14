// WAP to read two floating type numbers from user. Calculate their sum, difference, product and average
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    float a , b , sum , diff , prod , avg ;
    printf("Enter the first float number : ");
    scanf("%f",&a);
    printf("Enter the second float number : ");
    scanf("%f",&b);

    sum = a + b;
    diff = a-b;
    prod = a*b;
    avg = sum / 2 ;

    printf("The sum is %f\n" , sum);
    printf("The difference is %f\n" , diff);
    printf("The product is %f\n" , prod);
    printf("The average is %f" , avg);


    return 0;
}