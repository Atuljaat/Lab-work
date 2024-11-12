// Program to define a structure stores and write a functionupdate() to change the values of its members. (Pass structure to update() andreturn structure.)
#include <stdio.h>
#include <string.h>
struct Store {
char name[50];
char location[50];
int inventoryCount;
};
struct Store update(struct Store s) {
printf("\nUpdating store details:\n");
printf("Enter new store name: ");
getchar();
gets(s.name);
s.name[strcspn(s.name, "\n")] = '\0';
printf("Enter new store location: ");
fgets(s.location, 50, stdin);
s.location[strcspn(s.location, "\n")] = '\0';
printf("Enter new inventory count: ");
scanf("%d", &s.inventoryCount);
return s;
}
int main() {
printf("Name : Atul kumar \t Class : BCA 1A\n");
printf("**************************************\n");
struct Store store1;
printf("Enter store details:\n");
printf("Enter store name: ");
gets(store1.name);
store1.name[strcspn(store1.name, "\n")] = '\0';
printf("Enter store location: ");
gets(store1.location);
store1.location[strcspn(store1.location, "\n")] = '\0';
printf("Enter inventory count: ");
scanf("%d", &store1.inventoryCount);
printf("\nStore details before update:\n");
printf("Store Name: %s\n", store1.name);
printf("Store Location: %s\n", store1.location);
printf("Inventory Count: %d\n", store1.inventoryCount);
store1 = update(store1);
printf("\nStore details after update:\n");
printf("Store Name: %s\n", store1.name);
printf("Store Location: %s\n", store1.location);
printf("Inventory Count: %d\n", store1.inventoryCount);
return 0;
}



