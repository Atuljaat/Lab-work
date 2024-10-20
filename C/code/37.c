//  Program to find a factorial of a no. using recursion.
#include <stdio.h>
int factorial (int n) {
 if (n == 0) {
 return 1;
 } else {
 return n * factorial (n - 1);
 }
}
int main () {
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
 int num, result;
 printf("Enter a number: ");
 scanf("%d", &num);

 result = factorial(num);

 printf("Factorial of %d is: %d\n", num, result);
 return 0;
}