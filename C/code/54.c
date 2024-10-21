// Program to define pointer variables for int ,char and float . Print thier values (using * ) and addresses using pointers.
#include <stdio.h>

int main() {
    int num = 12;
    char letter = 'a';
    float pie = 3.14;

    int* pointer1 = &num;
    char* pointer2 = &letter;
    float* pointer3 = &pie;
    
    printf("Value of num: %d\n", *pointer1);
    printf("Value of letter: %c\n", *pointer2);
    printf("Value of pie: %f\n", *pointer3);

    printf("Address of num: %p\n", pointer1);
    printf("Address of letter: %p\n", pointer2);
    printf("Address of pie: %p\n", pointer3);

    return 0;
}
