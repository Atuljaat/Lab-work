// To find nature of roots of quadratic equations
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    
    float a , b , c , discriminant ;
    printf("Enter the coefficient of a , b , c : ");
    scanf("%f %f %f" , &a , &b , &c);
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        printf("Roots are real and distinct. \n");
    } else if ( discriminant == 0)
    {
        printf("The roots are real and equal\n");
    } else {
        printf("The roots are complex and imaginary.\n");
    }
    
    return 0;
}