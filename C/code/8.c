// WAP to read temperature in Celcius and convert it to Farenheit and vice-versa. Display the results of the program

#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int temp , farenheit ;
    printf("Enter the temprature in celcius : ");
    scanf("%d" , &temp);
    
    farenheit = temp * 9/5 + 32;
    printf("The temprature is %dF",farenheit);
    return 0;
}