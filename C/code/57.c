// Program to declare an array of pointers, read values and print them. 
#include <stdio.h>
int main() {
printf("Name : Atul kumar \t Class : BCA 1A\n");
printf("**************************************\n");
int num,i;
printf("Enter the number of elements: ");
scanf("%d", &num);
int *arr[num];
for (i = 0; i < num; i++) {
arr[i] = (int *)malloc(sizeof(int));
if (arr[i] == NULL) {
printf("Memory allocation failed for element %d\n", i);
return -1;
}
}
printf("Enter %d values:\n", num);
for (i = 0; i < num; i++) {
printf("Value for element %d: ", i);
scanf("%d", arr[i]);
}
printf("\nValues stored in the array:\n");
for (i = 0; i < num; i++) {
printf("Value at element %d: %d\n", i, *arr[i]);
}
for (i = 0; i < num; i++) {
free(arr[i]);
}
return 0;
}