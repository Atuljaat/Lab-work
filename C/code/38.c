// Program to display the usage of Static Variable 
#include <stdio.h>
void callCounter() {
 static int count = 0;
 count++;
 printf("Function call count: %d\n", count);
}
void accumulateSum(int num) {
 static int sum = 0;
 sum += num;
 printf("Current sum after adding %d: %d\n", num, sum);
}
int main() {
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
 printf("Demonstrating static variable for function call counter:\n");
 for (int i = 0; i < 5; i++) {
 callCounter();
 }

 printf("\nDemonstrating static variable for accumulating sum:\n");
 accumulateSum(10);
 accumulateSum(20);
 accumulateSum(30);
 accumulateSum(498);
 return 0;
}