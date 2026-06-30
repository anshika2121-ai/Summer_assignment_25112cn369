//student record system
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50
#define NAME_LEN 50

int main() {
    int ids[MAX_STUDENTS];
    char names[MAX_STUDENTS][NAME_LEN];
    float marks[MAX_STUDENTS];
    int count = 0, choice;

    while (1) {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= MAX_STUDENTS) {
                printf("Database full!\n");
                continue;
            }
            printf("Enter Student ID: ");
            scanf("%d", &ids[count]);
            getchar();
            
            printf("Enter Student Name: ");
            fgets(names[count], NAME_LEN, stdin);
            names[count][strcspn(names[count], "\n")] = '\0';
            
            printf("Enter Marks: ");
            scanf("%f", &marks[count]);
            
            count++;
            printf("Record added successfully!\n");
        } 
        else if (choice == 2) {
            if (count == 0) {
                printf("No records found.\n");
                continue;
            }
            printf("\n--- Student Records List ---\n");
            for (int i = 0; i < count; i++) {
                printf("Student #%d\n", i + 1);
                printf("  ID    : %d\n", ids[i]);
                printf("  Name  : %s\n", names[i]);
                printf("  Marks : %.2f\n", marks[i]);
                printf("---------------------------\n");
            }
        } 
        else if (choice == 3) {
            printf("Exiting system. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

//mini library system
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 50
#define TITLE_LEN 100

int main() {
    char books[MAX_BOOKS][TITLE_LEN];
    int count = 0, choice;
    char searchTitle[TITLE_LEN];
    int found;

    while (1) {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Search Book by Title\n");
        printf("3. Display All Books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                if (count >= MAX_BOOKS) {
                    printf("Library is full!\n");
                    break;
                }
                printf("Enter Book Title: ");
                fgets(books[count], TITLE_LEN, stdin);
                books[count][strcspn(books[count], "\n")] = '\0';
                count++;
                printf("Book added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("Library is empty.\n");
                    break;
                }
                printf("Enter Title to Search: ");
                fgets(searchTitle, TITLE_LEN, stdin);
                searchTitle[strcspn(searchTitle, "\n")] = '\0';

                found = 0;
                for (int i = 0; i < count; i++) {
                    if (strcasecmp(books[i], searchTitle) == 0) {
                        printf("\nMatch Found!\n");
                        printf("  Rack No : %d\n", i + 1);
                        printf("  Title   : %s\n", books[i]);
                        printf("---------------------------\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Book not available in this library.\n");
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No books available.\n");
                    break;
                }
                printf("\n--- Available Books List ---\n");
                for (int i = 0; i < count; i++) {
                    printf("Book #%d\n", i + 1);
                    printf("  Title : %s\n", books[i]);
                    printf("---------------------------\n");
                }
                break;

            case 4:
                printf("Exiting Library Management System.\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}


//mini employee management system
#include <stdio.h>
#include <string.h>

#define MAX_EMP 30
#define NAME_LEN 50

int main() {
    int empIds[MAX_EMP];
    char empNames[MAX_EMP][NAME_LEN];
    double salaries[MAX_EMP];
    int count = 0, choice, searchId, found;

    while (1) {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Update Salary by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= MAX_EMP) {
                printf("System Database limit reached.\n");
                continue;
            }
            printf("Enter ID: ");
            scanf("%d", &empIds[count]);
            getchar();
            
            printf("Enter Name: ");
            fgets(empNames[count], NAME_LEN, stdin);
            empNames[count][strcspn(empNames[count], "\n")] = '\0';
            
            printf("Enter Salary: ");
            scanf("%lf", &salaries[count]);
            
            count++;
            printf("Employee profile saved.\n");
        } 
        else if (choice == 2) {
            if (count == 0) {
                printf("Database empty.\n");
                continue;
            }
            printf("\n--- Employee Records List ---\n");
            for (int i = 0; i < count; i++) {
                printf("Employee #%d\n", i + 1);
                printf("  ID    : %d\n", empIds[i]);
                printf("  Name  : %s\n", empNames[i]);
                printf("  Salary: $%.2lf\n", salaries[i]);
                printf("---------------------------\n");
            }
        } 
        else if (choice == 3) {
            printf("Enter Employee ID to update details: ");
            scanf("%d", &searchId);
            found = 0;
            for (int i = 0; i < count; i++) {
                if (empIds[i] == searchId) {
                    printf("Current Salary: %.2lf. Enter New Salary: ", salaries[i]);
                    scanf("%lf", &salaries[i]);
                    printf("Salary revised successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Employee with ID %d not found.\n", searchId);
            }
        } 
        else if (choice == 4) {
            printf("Terminating session.\n");
            break;
        } 
        else {
            printf("Invalid input option.\n");
        }
    }
    return 0;
}

//mini project
#include <stdio.h>
#include <string.h>

void triggerIntersection(char streets[][20], char status[]);
void changeSignal(char status[]);

int main() {
    char operatorName[20];
    char streets[2][20] = {"Main Street", "Broadway Avenue"};
    char currentStatus[10] = "RED";
    int choice;

    printf("Enter Grid Controller Name: ");
    fgets(operatorName, 20, stdin);
    operatorName[strcspn(operatorName, "\n")] = '\0';

    while (1) {
        printf("\n=== CITY TRAFFIC PANEL (%s) ===\n", operatorName);
        printf("Current Signal State: [%s]\n", currentStatus);
        printf("1. Trigger Intersection Status Report\n");
        printf("2. Cycle Signal Lights (Change Color)\n");
        printf("3. Shutdown Grid Control\n");
        printf("Select Option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            triggerIntersection(streets, currentStatus);
        } 
        else if (choice == 2) {
            changeSignal(currentStatus);
        } 
        else if (choice == 3) {
            printf("Disconnecting grid safely. Goodbye Operator %s!\n", operatorName);
            return 0;
        } 
        else {
            printf("Invalid system command!\n");
        }
    }
}

void triggerIntersection(char streets[][20], char status[]) {
    printf("\n--- INTERSECTION LIVE UPDATES ---\n");
    for (int i = 0; i < 2; i++) {
        printf("  Zone %d -> %s Status: ", i + 1, streets[i]);
        if (strcmp(status, "GREEN") == 0 && i == 0) {
            printf("FLOWING\n");
        } else if (strcmp(status, "GREEN") == 0 && i == 1) {
            printf("BLOCKED\n");
        } else {
            printf("CAUTION / HALTED\n");
        }
    }
    printf("---------------------------------\n");
}

void changeSignal(char status[]) {
    if (strcmp(status, "RED") == 0) {
        strcpy(status, "GREEN");
        printf("\nLight shifted smoothly to: GREEN (Go)\n");
    } else if (strcmp(status, "GREEN") == 0) {
        strcpy(status, "YELLOW");
        printf("\nLight shifted smoothly to: YELLOW (Slow Down)\n");
    } else {
        strcpy(status, "RED");
        printf("\nLight shifted smoothly to: RED (Stop)\n");
    }
}