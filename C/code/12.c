// To find area and perimeter of rectangle. Read input from user
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int length , breath , area , perimeter ;
    printf("Enter the length of the rectangle : ");
    scanf("%d",&length);
    printf("Enter the breath of the rectangle : ");
    scanf("%d",&breath);

    area = length * breath ;
    perimeter = 2 * (length+breath);
    printf("Area of the rectangle is %d\n" , area);
    printf("Perimeter of the rectangle is %d" , perimeter);
    return 0;
}