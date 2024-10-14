// WAP to read two variables of type int and float. Read their values from the user and print the values
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int a , b;
    printf("Enter an integer value : ");
    scanf("%d",&a);
    printf("The value of a is %d\n", a);

    printf("Enter an integer value : ");
    scanf("%d",&b);
    printf("The value of b is %d\n", b);

    float c , d;
    printf("Enter a float value : ");
    scanf("%f",&c);
    printf("The value of c is %f\n" , c);

    printf("Enter a float value : ");
    scanf("%f",&d);
    printf("The value of d is %f" , d);
    
    return 0;
}