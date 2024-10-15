// To print circumference and area of circle. Read input from user
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int circumference , area , radius ;
    printf("Enter the radius of the circle :");
    scanf("%d" , &radius);
    circumference =  2 * 3.14 * radius ;
    area = 3.14 * radius * radius ;

    printf("Circumference of the circle is %d\n cm" , circumference); 
    printf("Area of the circle is %d sqcm" , area); 
    return 0;
}
