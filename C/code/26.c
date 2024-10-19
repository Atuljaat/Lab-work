// WAP to compute x^n using while statement
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int x , n , i = 2 , a;
    printf("Enter the base(x) : ");
    scanf("%d" , &x);
    printf("Enter the exponent : ");
    scanf("%d" , &n);
    a = x ;
    while (  i <= n)
    {
        x = x * x ;
    printf("%d ^ %d = %d\n" , a , i , x);
        i++ ;
    }

    // Not working 
    
    return 0;
}