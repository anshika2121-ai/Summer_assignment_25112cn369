//Library Management system
#include<stdio.h>
#include<string.h>
struct book{
    int id;
    char title[50];
    char author[50];  
};
int main(){
    struct book library[100];
    int count = 0;
    int choice;
    while(1){
        printf("\n--Library Management System--\n");
        printf("1. Add Book\n");
        printf("2.Display All Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1){
            printf("entr book ID: ");
            scanf("%d", &library[count].id);
            getchar();
            printf("Enter book Title: ");
            fgets(library[count].title, sizeof(library[count].title), stdin);
            library[count].author[strcspn(library[count].author, "\n")] = 0;
            count ++;
            printf("book added successfully!\n");    
        }
        else if(choice == 2){
            if(count ==  0){
                printf("no book available in the libray.\n");
            }else{
                printf("\nID\tTitle\t\t\t|\tAuthor\n");
                printf("------------------------------------------------------------\n");
                for(int i = 0; i<count; i++){
                    printf("%d\t|\t%s\t\t\t|\t%s\n", library[i].id, library[i].title, library[i].author);
                }
            }
        }
        else if(choice == 3){
            printf("exiting system..\n");
            break;
        }
        else{
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Bank account System

#include<stdio.h>
#include<string.h>
int main(){
   int accountNumber = 12435567;
   char accountHolder[] = "Alina";
   double balance = 5000.00;
    int choice;
    double amount;
    while(1){
        printf("\n--Bank Account System--\n");
        printf("1. Check Balance\n");
        printf("2.deposit money \n");
        printf("3. withdraw maney\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("\n Account holder %s\n", accountHolder);
            printf("Account Number: %d\n", accountNumber);
            printf("Current Balance: $%.2f\n", balance);
            break;

            case 2:
            printf("enter amount to deposit: ");
            scanf("%lf", &amount);
            if(amount > 0){
                balance += amount;
                printf("4%.2f deposited successfully!\n", amount);
            } else{
                printf("invalid deposit amount!\n");
            }
            break;
            case 3:
            printf("enter amount to  withdraw: ");
            scanf("%lf", &amount);
            if(amount > balance){
                printf("Insufficient balance!\n");
            }else if(amount <= 0){
                printf("invalid withdraw amount!\n");
            }else{
                balance -= amount;
                printf("$%.2f withdrawn successfully!\n", amount);
            }
            break;
            case 4:
            printf("thankyou for using oour banking services.\n");
            return 0 ;
            default :
            printf("invalid choice ! try again.\n");


        }
    }  
    return 0;
}

//ticket booking system
#include <stdio.h>

int main() {
    int totalSeats = 50; 
    int choice, bookedSeats;

    while(1) {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. View Available Seats\n");
        printf("2. Book Tickets\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("\nAvailable Seats left: %d\n", totalSeats);
        } 
        else if(choice == 2) {
            printf("Enter number of seats to book: ");
            scanf("%d", &bookedSeats);

            
            if(bookedSeats <= 0) {
                printf("Invalid seat number request!\n");
            } else if(bookedSeats > totalSeats) {
                printf("Sorry, only %d seats are available.\n", totalSeats);
            } else {
                totalSeats -= bookedSeats; 
                printf("Successfully booked %d tickets!\n", bookedSeats);
            }
        } 
        else if(choice == 3) {
            printf("Exiting booking panel...\n");
            break;
        } 
        else {
            printf("Invalid options selected!\n");
        }
    }
    return 0;
 }

//contact management system
#include <stdio.h>
#include <string.h>

struct Contact {
    char name[40];
    char phone[15];
};

int main() {
    struct Contact directory[50];
    int totalContacts = 0;
    int choice;
    char searchName[40];

    while(1) {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n");
        printf("2. Search Contact\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        if(choice == 1) {
            printf("Enter Name: ");
            fgets(directory[totalContacts].name, 40, stdin);
            directory[totalContacts].name[strcspn(directory[totalContacts].name, "\n")] = 0;

            printf("Enter Phone Number: ");
            fgets(directory[totalContacts].phone, 15, stdin);
            directory[totalContacts].phone[strcspn(directory[totalContacts].phone, "\n")] = 0;

            totalContacts++;
            printf("Contact saved successfully!\n");
        } 
        else if(choice == 2) {
            printf("Enter name to search: ");
            fgets(searchName, 40, stdin);
            searchName[strcspn(searchName, "\n")] = 0;

            int found = 0;
            for(int i = 0; i < totalContacts; i++) {
                if(strcmp(directory[i].name, searchName) == 0) {
                    printf("\nContact Found!\nPhone: %s\n", directory[i].phone);
                    found = 1;
                    break;
                }
            }
            if(!found) {
                printf("Contact not found.\n");
            }
        } 
        else if(choice == 3) {
            printf("Exiting standard directory...\n");
            break;
        } 
        else {
            printf("Invalid selection!\n");
        }
    }
    return 0;
}
