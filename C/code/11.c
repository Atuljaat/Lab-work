// Read input from user at runtime and convert time from
//  -hours to seconds
//  -hours to minutes
//  -minutes to seconds

#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    float hr , min , sec; 

    // Hours to seconds and minutes
    printf("Enter the time in hours : ");
    scanf("%f" , &hr);
    sec = hr*60*60;
    printf("Time in seconds is %.2f\n" , sec);
    min = hr*60;
    printf("Time in minutes is %.2f\n" , min);

    // Minutes to seconds
    printf("Enter the time in minutes : ");
    scanf("%f" , &min);
    sec = min*60;
    printf("Time in seconds is %.2f" , sec);

    return 0;
}