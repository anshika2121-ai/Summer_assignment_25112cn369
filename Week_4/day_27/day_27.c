//student record management system
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int rollNo;
    char name[50];
    float gpa;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting system. Goodbye!\n");
            break;
        }

        switch (choice) {
            case 1:
                if (count < MAX_STUDENTS) {
                    printf("Enter Roll Number: ");
                    scanf("%d", &students[count].rollNo);
                    printf("Enter Name: ");
                    scanf(" %[^\n]s", students[count].name);
                    printf("Enter GPA: ");
                    scanf("%f", &students[count].gpa);
                    count++;
                    printf("Record added successfully!\n");
                } else {
                    printf("Database full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\n--- Student Records ---\n");
                    printf("%-10s %-30s %-5s\n", "Roll No", "Name", "GPA");
                    for (int i = 0; i < count; i++) {
                        printf("%-10d %-30s %-5.2f\n", students[i].rollNo, students[i].name, students[i].gpa);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No records available to search.\n");
                } else {
                    int searchRoll;
                    int found = 0;
                    printf("Enter Roll Number to search: ");
                    scanf("%d", &searchRoll);

                    for (int i = 0; i < count; i++) {
                        if (students[i].rollNo == searchRoll) {
                            printf("\nRecord Found:\n");
                            printf("Roll No: %d\nName: %s\nGPA: %.2f\n", students[i].rollNo, students[i].name, students[i].gpa);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Student with Roll No %d not found.\n", searchRoll);
                    }
                }
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

//employee management system
#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    char department[30];
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 3) {
            printf("Exiting system. Goodbye!\n");
            break;
        }

        switch (choice) {
            case 1:
                if (count < MAX_EMPLOYEES) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &employees[count].id);
                    printf("Enter Name: ");
                    scanf(" %[^\n]s", employees[count].name);
                    printf("Enter Department: ");
                    scanf(" %[^\n]s", employees[count].department);
                    count++;
                    printf("Employee registered successfully!\n");
                } else {
                    printf("Database limit reached!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No employee records found.\n");
                } else {
                    printf("\n--- Employee List ---\n");
                    printf("%-10s %-30s %-20s\n", "ID", "Name", "Department");
                    for (int i = 0; i < count; i++) {
                        printf("%-10d %-30s %-20s\n", employees[i].id, employees[i].name, employees[i].department);
                    }
                }
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}


//salary management system
#include <stdio.h>

struct SalaryRecord {
    int empId;
    char name[50];
    double baseSalary;
    double hra;
    double pf;
    double netSalary;
};

int main() {
    struct SalaryRecord emp;

    printf("--- Enter Salary Details ---\n");
    printf("Enter Employee ID: ");
    scanf("%d", &emp.empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", emp.name);

    printf("Enter Base Salary: ");
    scanf("%lf", &emp.baseSalary);

    emp.hra = emp.baseSalary * 0.20; 
    emp.pf = emp.baseSalary * 0.12;  
    emp.netSalary = emp.baseSalary + emp.hra - emp.pf;

    printf("\n========================================\n");
    printf("           SALARY SLIP                  \n");
    printf("========================================\n");
    printf("Employee ID   : %d\n", emp.empId);
    printf("Employee Name : %s\n", emp.name);
    printf("Base Salary   : $%.2f\n", emp.baseSalary);
    printf("HRA (20%%)     : $%.2f\n", emp.hra);
    printf("PF Deduction  : $%.2f\n", emp.pf);
    printf("----------------------------------------\n");
    printf("NET SALARY    : $%.2f\n", emp.netSalary);
    printf("========================================\n");

    return 0;
}


//marksheet generation system
#include <stdio.h>

struct Marksheet {
    int rollNo;
    char name[50];
    float physics;
    float chemistry;
    float math;
    float total;
    float percentage;
    char grade[5];
};

int main() {
    struct Marksheet student;

    printf("--- Enter Student Details ---\n");
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);

    printf("Enter Student Name: ");
    scanf(" %[^\n]s", student.name);

    printf("\n--- Enter Marks (Out of 100) ---\n");
    printf("Physics: ");
    scanf("%f", &student.physics);
    printf("Chemistry: ");
    scanf("%f", &student.chemistry);
    printf("Mathematics: ");
    scanf("%f", &student.math);

    student.total = student.physics + student.chemistry + student.math;
    student.percentage = (student.total / 300.0) * 100.0;

    if (student.physics < 33.0 || student.chemistry < 33.0 || student.math < 33.0) {
        sprintf(student.grade, "FAIL");
    } else if (student.percentage >= 85.0) {
        sprintf(student.grade, "A+");
    } else if (student.percentage >= 60.0) {
        sprintf(student.grade, "A");
    } else if (student.percentage >= 50.0) {
        sprintf(student.grade, "B");
    } else {
        sprintf(student.grade, "C");
    }

    printf("\n==================================================\n");
    printf("                REPORT CARD / MARKSHEET           \n");
    printf("==================================================\n");
    printf("Roll Number : %d\n", student.rollNo);
    printf("Student Name: %s\n", student.name);
    printf("--------------------------------------------------\n");
    printf("%-20s %-15s %-15s\n", "Subject", "Max Marks", "Marks Obtained");
    printf("--------------------------------------------------\n");
    printf("%-20s %-15d %-15.1f\n", "Physics", 100, student.physics);
    printf("%-20s %-15d %-15.1f\n", "Chemistry", 100, student.chemistry);
    printf("%-20s %-15d %-15.1f\n", "Mathematics", 100, student.math);
    printf("--------------------------------------------------\n");
    printf("Total Marks : %.1f / 300\n", student.total);
    printf("Percentage  : %.2f%%\n", student.percentage);
    printf("Final Status: %s\n", student.grade);
    printf("==================================================\n");

    return 0;
}
