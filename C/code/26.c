// WAP to compute x^n using while statement
#include <stdio.h>
int main(){
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");

    int x, p,n=1;
 printf("Enter the base (X): ");
 scanf("%d", &x);
 printf("Enter the exponent (p): ");
 scanf("%d", &p);
 int i = 1;
 while(i<=p){
 n *= x;
 printf("%d^%d = %d\n", x, i, n);
 i++;
}
 return 0;
};