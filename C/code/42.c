// To check whether the given 5-digits are palindrome or not.
#include <stdio.h>
int main() {
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
 int num, reversedNum = 0, originalNum, digit;
 printf("Enter a 5-digit number: ");
 scanf("%d", &num);
 if (num < 10000 || num > 99999) {
 printf("Please enter a valid 5-digit number.\n");
 return 1;
 }
 originalNum = num;

 while (num != 0) {
 digit = num % 10;
 reversedNum = reversedNum * 10 + digit;
 num /= 10;
 }
 if (originalNum == reversedNum) {
 printf("%d is a palindrome.\n", originalNum);
 } else {
 printf("%d is not a palindrome.\n", originalNum);
 }
 return 0;
}