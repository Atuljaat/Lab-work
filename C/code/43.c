//  Program to show sum of n elements of array & show the average
#include <stdio.h>
int main() {
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
 int n;
 float sum = 0.0, average;
 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);
 float arr[n];
 printf("Enter %d elements:\n", n);
 for (int i = 0; i < n; i++) {
 printf("Element %d: ", i + 1);
 scanf("%f", &arr[i]);
 sum += arr[i];
 }
 average = sum / n;
 printf("Sum of the elements: %.2f\n", sum);
 printf("Average of the elements: %.2f\n", average);
 return 0;
}