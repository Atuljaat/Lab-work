// To read a number and check whether it is odd or even (if-else)
#include <stdio.h>
int main() {
printf("Name : Atul kumar \t Class : BCA 1A\n");
printf("**************************************\n");
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);
 if (num % 2 == 0) {
 printf("%d is an even number.\n", num);
 } else {
 printf("%d is an odd number.\n", num);
 }
 return 0;
}