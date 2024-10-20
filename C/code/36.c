// Program to find factorial of a number using function and return its value in the calling function
#include <stdio.h>
int factorial (int n) {
 int fact = 1;

 for (int i = 1; i <= n; i++) {
 fact *= i;
 }

 return fact;
}
int main () {
 int num, result;

 printf("Enter a number: ");
 scanf("%d", &num);
 result = factorial(num);

 printf("Factorial of %d is: %d\n", num, result);
 return 0; 
}