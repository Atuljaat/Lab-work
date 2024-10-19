// WAP to print natural numbers till n using while loop. Also print reverse counting from m to 1. Get m,n from user at runtime
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int n , m , i = 0 , j = 0;
    printf("Enter the value of n and m : ");
    scanf("%d %d",&n , &m);
    printf("Natural numbers till %d are : \n" , n );
    while ( n >= i)
    {
        printf("%d\n" , i);
        i = i + 1;
    }

    printf("Reverse counting from %d to 1 :\n");
    while ( m >= 1)
    {
        printf("%d\n" , m);
        m = m - 1 ;
    }

    return 0;
}