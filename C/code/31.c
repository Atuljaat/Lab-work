// To print sum of first n odd natural numbers
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
int n, i, sum=0;
printf("Enter a number: ");
scanf("%d", &n);
for(i=1; i<=n; i++){
int odd_num = 2*i-1;
sum += odd_num;
printf("%d ", odd_num);
}
printf("\nSum of first %d odd number is %d", i-1, sum);
    return 0;
}
