// Program using pointers to read array elements and findtheirsum.
#include <stdio.h>
int main() {
printf("Name : Atul kumar \t Class : BCA 1A\n");
printf("**************************************\n");
int num,i, sum = 0;
printf("Enter the number of elements in array: ");
scanf("%d", &num);
int arr[num];
for (i = 0; i < num; i++) {
scanf("%d", &arr[i]);
}
int *ptr = arr;
for (i = 0; i < num; i++) {
sum += *(ptr + i);
}
printf("Sum of the elements in array : %d\n", sum);
return 0;
}