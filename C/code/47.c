// to perform Matrix Operations (switch-case): Addition, Subtraction, Multiplication and Transpose
#include <stdio.h>
void add(int a[3][3], int b[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtract(int a[3][3], int b[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiply(int a[3][3], int b[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transpose(int a[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[j][i] = a[i][j];
        }
    }
}

int main() {
    printf("Name : Atul kumar \t Class : BCA 1A\n");
    printf("**************************************\n");
    int choice;
    int a[3][3], b[3][3], result[3][3];

    printf("Enter elements of first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            add(a, b, result);
            printf("Result of Addition:\n");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            subtract(a, b, result);
            printf("Result of Subtraction:\n");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            multiply(a, b, result);
            printf("Result of Multiplication:\n");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;
        case 4:
            printf("Transpose of first matrix:\n");
            transpose(a, result);
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            printf("Transpose of second matrix:\n");
            transpose(b, result);
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
