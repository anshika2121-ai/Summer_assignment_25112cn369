// menu driven calculator
#include <stdio.h>
#include <stdlib.h>

void showMenu() {
    printf("\n--- Calculator Menu ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        showMenu();
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                }
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    }
    return 0;
}

//menu driven array operation system
#include <stdio.h>

#define MAX 100

void display(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX], size = 0, choice, element, position;

    while (1) {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Search Element\n");
        printf("4. Display Array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (size >= MAX) {
                    printf("Array Overflow! Cannot insert more elements.\n");
                    break;
                }
                printf("Enter element to insert and position (0 to %d): ", size);
                scanf("%d %d", &element, &position);
                
                if (position < 0 || position > size) {
                    printf("Invalid position!\n");
                } else {
                    for (int i = size; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = element;
                    size++;
                    printf("Element inserted successfully.\n");
                }
                break;

            case 2:
                if (size == 0) {
                    printf("Array Underflow! Nothing to delete.\n");
                    break;
                }
                printf("Enter position to delete (0 to %d): ", size - 1);
                scanf("%d", &position);

                if (position < 0 || position >= size) {
                    printf("Invalid position!\n");
                } else {
                    printf("Deleted element: %d\n", arr[position]);
                    for (int i = position; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                }
                break;

            case 3:
                if (size == 0) {
                    printf("Array is empty.\n");
                    break;
                }
                printf("Enter element to search: ");
                scanf("%d", &element);
                int found = -1;
                for (int i = 0; i < size; i++) {
                    if (arr[i] == element) {
                        found = i;
                        break;
                    }
                }
                if (found != -1)
                    printf("Element found at index: %d\n", found);
                else
                    printf("Element not found in the array.\n");
                break;

            case 4:
                display(arr, size);
                break;

            case 5:
                printf("Exiting Program.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}

// menu driven string operation system
#include <stdio.h>

void stringReverse(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str1[100], str2[100];
    int choice, i, j;

    while (1) {
        printf("\n--- String Operations Menu ---\n");
        printf("1. String Length\n");
        printf("2. String Concatenation\n");
        printf("3. String Comparison\n");
        printf("4. String Reverse\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline buffer

        if (choice == 5) break;

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                for (i = 0; str1[i] != '\0'; i++);
                if (str1[i-1] == '\n') i--; // adjust for newline from fgets
                printf("Length of the string: %d\n", i);
                break;

            case 2:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                
                for (i = 0; str1[i] != '\0'; i++);
                for (j = 0; str2[j] != '\0'; j++, i++) {
                    str1[i] = str2[j];
                }
                str1[i] = '\0';
                printf("Concatenated String: %s\n", str1);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                
                i = 0;
                while (str1[i] == str2[i] && str1[i] != '\0') i++;
                
                if (str1[i] == str2[i])
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 4:
                printf("Enter a string: ");
                scanf("%s", str1);
                stringReverse(str1);
                printf("Reversed String: %s\n", str1);
                break;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

//inventory management system
#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 50

struct Item {
    int id;
    char name[30];
    int quantity;
    double price;
};

int main() {
    struct Item inventory[MAX_ITEMS];
    int itemCount = 0;
    int choice, searchId, found, updateQty;

    while (1) {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add New Item\n");
        printf("2. Display All Items\n");
        printf("3. Search Item by ID\n");
        printf("4. Update Item Stock\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (itemCount >= MAX_ITEMS) {
                    printf("Inventory limit reached!\n");
                    break;
                }
                printf("Enter Item ID: ");
                scanf("%d", &inventory[itemCount].id);
                printf("Enter Item Name: ");
                scanf("%s", inventory[itemCount].name);
                printf("Enter Quantity: ");
                scanf("%d", &inventory[itemCount].quantity);
                printf("Enter Price: ");
                scanf("%lf", &inventory[itemCount].price);
                itemCount++;
                printf("Item added successfully!\n");
                break;

            case 2:
                if (itemCount == 0) {
                    printf("No items in inventory.\n");
                    break;
                }
                printf("\nID\tName\t\tQuantity\tPrice\n");
                printf("---------------------------------------------------\n");
                for (int i = 0; i < itemCount; i++) {
                printf("%d\t%s\t\t%d\t\t$%.2lf\n", 
                inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
            }
                break;

            case 3:
                printf("Enter Item ID to search: ");
                scanf("%d", &searchId);
                found = 0;
                for (int i = 0; i < itemCount; i++) {
                    if (inventory[i].id == searchId) {
                        printf("\nItem Found:\nID: %d\nName: %s\nQuantity: %d\nPrice: $%.2lf\n", 
                               inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Item with ID %d not found.\n", searchId);
                break;

            case 4:
                printf("Enter Item ID to update stock: ");
                scanf("%d", &searchId);
                found = 0;
                for (int i = 0; i < itemCount; i++) {
                    if (inventory[i].id == searchId) {
                        printf("Current quantity of %s is %d. Enter new quantity: ", inventory[i].name, inventory[i].quantity);
                        scanf("%d", &updateQty);
                        inventory[i].quantity = updateQty;
                        printf("Stock updated successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Item with ID %d not found.\n", searchId);
                break;

            case 5:
                printf("Exiting Inventory System.\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
