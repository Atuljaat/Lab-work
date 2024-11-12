// Program to find length of string using pointers.
#include <stdio.h>
int main() {
printf("Name : Atul kumar \t Class : BCA 1A\n");
printf("**************************************\n");
char str[50];
int len = 0;
printf("Enter a string: ");
gets(str);
char *ptr = str;
while (*ptr != '\0') {
len++;
ptr++;
}
printf("Length of the string is: %d\n", len);
return 0;
}