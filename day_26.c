//number guessing game
#include<stdio.h>
#include<stdlib.h>
int main(){
    int secret_number, guess;
    secret_number = (rand() % 100) + 1;

printf("-- Welcome to the Number Guessing Game! -- \n");
printf("I have chosen a number between 1 to 100.\n");

do{
    printf("enter your guess: ");
    scanf("%d", &guess);

    if(guess > secret_number){
        printf("Too high! Try again.\n");
    }
    else if (guess < secret_number){
        printf("Too low! Try again.\n");
    }
    else{
        printf("\nCongratulations! You guessed the number!\n");
    }
}while (guess != secret_number);
return 0;
}

//voting eligibility system
#include<stdio.h>
int main (){
int age;

printf("--Voting eligibility system --\n");
printf("Please enter your age: ");
scanf("%d", &age);

if(age < 0){
    printf("Invalid input! Age cannot be negative.\n");
}
else if(age >= 18){
    printf(" you are eligible to vote ! \n");
}
else {
    printf("You are not eligible to vote yet.\n");
}
return 0;
}


//ATM Stimulation
#include <stdio.h>
int main(){
    float balance = 5000.00;
    int pin = 1234;
    int entered_pin , choice;
    float amount;

    printf("--Welcome to the mock ATM--\n");
    printf("Please enter your 4-digit PIN: ");
    scanf("%d", &entered_pin);

    if(entered_pin != pin){
        printf("Incorrect PIN. Access Denied.\n");
        return 0;
    }
    while(1){
        printf("\n --ATM Menu--\n");
        printf("1. Check Balance\n");
         printf("2. Deposit Money\n");
          printf("3. Withdraw Money\n");
           printf("4. exit\n \n");
           printf("select an option (1-4): ");
            scanf(" %d", &choice);
            printf("\n");

        switch (choice) {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("$%.2f deposited successfully. New balance: $%.2f\n", amount, balance);
                } else {
                    printf("Invalid amount! Must be greater than 0.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("❌ Insufficient balance!\n");
                } else if (amount <= 0) {
                    printf("Invalid amount! Must be greater than 0.\n");
                } else {
                    balance -= amount;
                    printf("✅ Please collect your cash: $%.2f\n", amount);
                    printf("Remaining balance: $%.2f\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                return 0; // Exit program

            default:
                printf("Invalid option. Please choose between 1 and 4.\n");
                if (choice != 4) {
            printf("\nPress Enter to return to the Main Menu...");
            getchar();
            getchar();
        }
    }
    return 0;
}   
}
    

//Quiz Application

#include <stdio.h>
#include <ctype.h>

int main() {
    // Array of questions
    char questions[][100] = {
        "1. Which of the following is the correct format specifier for a double in C?",
        "2. What is the default return type of a function if it is not explicitly specified?",
        "3. Which operator is used to find the size of a variable or data type in C?",
        "4. Which of these is NOT a valid loop structure in C?"
    };

    char options[][4][50] = {
        {"A) %f", "B) %lf", "C) %d", "D) %s"},
        {"A) void", "B) float", "C) int", "D) char"},
        {"A) size()", "B) sizeof", "C) length()", "D) allocation"},
        {"A) for", "B) while", "C) do-while", "D) repeat-until"}
    };
    // Array of correct answers
    char correct_answers[] = {'B', 'C', 'B', 'D'};
    
    int total_questions = sizeof(correct_answers) / sizeof(correct_answers[0]);
    int score = 0;
    char user_answer;

    printf("--- Welcome to the Placement Quiz Challenge ---\n\n");
    // Loop through each question
    for (int i = 0; i < total_questions; i++) {
        printf("%s\n", questions[i]);
    
        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);
        }
        // user input
        printf("Your Answer (A/B/C/D): ");
        scanf(" %c", &user_answer);
        
        user_answer = toupper(user_answer);

        if (user_answer == correct_answers[i]) {
            printf("✅ Correct!\n\n");
            score++;
        } else {
            printf("❌ Incorrect! The correct answer was %c.\n\n", correct_answers[i]);
        }
    }
    printf("---------------------------------------\n");
    printf("Quiz Over! Your Final Score: %d out of %d\n", score, total_questions);
    
    float percentage = ((float)score / total_questions) * 100;
    printf("Percentage: %.2f%%\n", percentage);
    
    if (percentage >= 75.0) {
        printf("Performance: Excellent! Ready for technical rounds.\n");
    } else {
        printf("Performance: Needs Revision. Keep practicing!\n");
    }
    printf("---------------------------------------\n");

    return 0;
}