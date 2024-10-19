// To find electricity charges based on consumption
//  Consumption Units Rate of Charge
//  0 – 200 Rs. 0.50 per unit
//  201 – 400 Rs. 100 plus Rs. 0.65 per unit excess of 200
//  401 – 600 Rs. 230 plus Rs. 0.80 per unit excess of 400
//  601 and above Rs. 390 plus Rs. 1.00 per unit excess of 600

#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int units;
    float charges;
    printf("Enter the units consumed : ");
    scanf("%d" , &units);
    if (units >= 0 && units <= 200){
        charges = units * 0.50;
    } else if (units >= 201 && units <= 400){
        charges = 100 + (units - 200) * 0.65;
    } else if (units >= 401 && units <= 600){
        charges = 230 + (units - 400) * 0.80;
    } else if (units >= 601){
        charges = 390 + (units - 600) * 1.00;
    } else {
        printf("Invalid units");
    }   
    printf("The charges for %d units is %.2f" , units , charges);
    return 0;
}