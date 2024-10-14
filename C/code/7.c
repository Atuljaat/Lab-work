// WAP to read Principle amount and time for a loan application. Take Rate of interest as a symbolic constant. Calculate Simple interest and display results

#include <stdio.h>
#define rate_of_interest 5
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    
    float amount , SI;
    int time ;

    printf("Enter the amount : ");
    scanf("%f",&amount);
    printf("Enter the time : ");
    scanf("%d",&time);

    SI =  (amount*time*rate_of_interest)/100.0;
    printf("Simple Interest is %.2f" , SI);

    return 0;
}