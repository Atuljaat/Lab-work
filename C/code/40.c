// Program to find all 3-digit Armstrong numbers
#include <stdio.h>
int main() {
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
 int num, digit, sum, originalNum;

 printf("3-digit Armstrong numbers are:\n");

 for (num = 100; num < 1000; num++) {
 originalNum = num;
 sum = 0;
 while (originalNum != 0) {
 digit = originalNum % 10;
 sum += digit * digit * digit;
 originalNum /= 10;
 }
 if (sum == num) {
 printf("%d ", num);
 }
 }
 printf("\n");
 return 0;
}