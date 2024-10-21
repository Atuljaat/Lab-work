//  Program to find maximum and minimum integer in an array using functions.
#include <stdio.h>
int findMax(int arr[], int n) {
 int max = arr[0];
 for (int i = 1; i < n; i++) {
 if (arr[i] > max) {
 max = arr[i];
 }
 }
 return max;
}
int findMin(int arr[], int n) {
 int min = arr[0];
 for (int i = 1; i < n; i++) {
 if (arr[i] < min) {
 min = arr[i];
 }
 }
 return min;
}
int main() {
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
 int n;
 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter %d elements:\n", n);
 for (int i = 0; i < n; i++) {
 printf("Element %d: ", i + 1);
 scanf("%d", &arr[i]);
 }
 int max = findMax(arr, n);
 int min = findMin(arr, n);

 printf("Maximum element: %d\n", max);
 printf("Minimum element: %d\n", min);
 return 0;
}