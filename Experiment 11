/**name: Rayyan A Kadiwal
Div:F 
Branch:Mechanical
Roll No: 20
UIN NO:251M023**/
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;
    int choice;

    while (1) {
        printf("\n---- Employee Database Menu ----\n");
        printf("1. Add Employee Record\n");
        printf("2. Display All Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            fp = fopen("employee.txt", "a");
            if (fp == NULL) {
                printf("Error opening file!\n");
                exit(1);
            }

            printf("Enter Employee ID: ");
            scanf("%d", &emp.id);

            printf("Enter Name: ");
            scanf("%s", emp.name);

            printf("Enter Salary: ");
            scanf("%f", &emp.salary);

            fprintf(fp, "%d %s %.2f\n", emp.id, emp.name, emp.salary);
            fclose(fp);

            printf("Record added successfully!\n");
            break;

        case 2:
            fp = fopen("employee.txt", "r");
            if (fp == NULL) {
                printf("No records found! File not created yet.\n");
                break;
            }

            printf("\n---- Employee Records ----\n");
            while (fscanf(fp, "%d %s %f", &emp.id, emp.name, &emp.salary) != EOF) {
                printf("ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
            }

            fclose(fp);
            break;

        case 3:
            printf("Exiting program...\n");
            exit(0);

        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

