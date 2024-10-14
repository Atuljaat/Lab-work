// WAP to read numbers for five subjects and print their sum and average.
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int physics , chemistry , maths , english , hindi , sum , average;

    printf("Enter the Physics marks :");
    scanf("%d", &physics);
    printf("Enter the Chemistry marks :");
    scanf("%d", &chemistry);
    printf("Enter the Maths marks :");
    scanf("%d", &maths);
    printf("Enter the English marks :");
    scanf("%d", &english);
    printf("Enter the Hindi marks :");
    scanf("%d", &hindi);

    sum = physics + chemistry + maths + english + hindi ;
    average = sum / 5 ;
    printf("The sum of marks is %d\n" , sum);
    printf("The average of marks is %d" , average);
    return 0;
}