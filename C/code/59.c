// Program to enter employee salary records, using structures. Create array of structures
#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[100];
    float salary;
};
int main() {
    printf("Name : Atul Kumar\tClass : BCA 1A\n");
    printf("**************************************\n");
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n]; 
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].id);
        
        printf("Enter Employee Name: ");
        getchar();  // To consume the newline character left by previous scanf
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; // Remove newline
        
        printf("Enter Employee Salary: ");
        scanf("%f", &employees[i].salary);
    }
    printf("\n--- Employee Salary Records ---\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
    }
    return 0;
}
