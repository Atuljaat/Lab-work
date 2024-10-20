// Program to swap two numbers using functions (Call by reference)
#include <stdio.h>
void swap (int *a, int *b) {
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}
int main () {
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
 int num1, num2;
 printf("Enter the first number: ");
 scanf("%d", &num1);
 printf("Enter the second number: ");
 scanf("%d", &num2);
 printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
 swap (&num1, &num2);
 printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
 return 0;
}