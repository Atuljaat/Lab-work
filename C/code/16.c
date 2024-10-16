// WAP to read from user the values for 3 products (item_no, quantity, price). Find the total bill value and display. Also, allow a discount of 10% on the total bill and display net bill value

#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    int item_no1, quantity1 ,   item_no2, quantity2 , item_no3, quantity3;
    float price1 , price2 , price3 , price ;

    printf("Enter the code of item no 1 : ");
    scanf("%d",&item_no1);
    printf("Enter the quantity of the item no 1 : ");
    scanf("%d",&quantity1);
    printf("Enter the individual price of item no 1 : ");
    scanf("%f",&price1);

    printf("Enter the code of item no 2 : ");
    scanf("%d",&item_no2);
    printf("Enter the quantity of the item no 2 : ");
    scanf("%d",&quantity2);
    printf("Enter the individual price of item no 2 : ");
    scanf("%f",&price2);

    printf("Enter the code of item no 3 : ");
    scanf("%d",&item_no3);
    printf("Enter the quantity of the item no 3 : ");
    scanf("%d",&quantity3);
    printf("Enter the individual price of item no 3 : ");
    scanf("%f",&price3);

    price = (item_no1*price1)+(item_no2*price2)+(item_no3*price3);
    price = price * 0.90;
    printf("Total bill is %.2f" , price);
    
    return 0;
}