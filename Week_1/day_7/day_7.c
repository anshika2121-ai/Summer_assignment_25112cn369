//factorial by recursion

#include<stdio.h>

 int factorial(int n){
 if(n ==0 || n==1){      //base case
    return 1;
 }
recursive call

 return n*factorial(n-1);
}

int main(){
    int num = 5;
    printf("factorial of %d ins : %d \n",num,factorial(num));
    return 0;
}

//recursive fibonacci

#include<stdio.h>

int fibonacci(int n){
    if(n==0)  //base case
    return 0;
    if(n==1)
    return 1;

   return  fibonacci(n-1)+fibonacci(n-2); //recursive call
}
int main(){
    int term =6;
    printf("fibonacci number at position %d is : %d\n",term ,fibonacci(term));
    return 0;
}

//sum of digits by recursion

#include<stdio.h>
int sumofDigits(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sumofDigits(n/10);
}
int main(){
    int number = 567;
    printf("the sum of %d digits is : %d",number,sumofDigits(number));
    return 0;
}


// reverse number by recursion

#include <stdio.h>
int reverseNumber(int n, int rev) {
    // Base case
    if (n == 0) {
        return rev;
    }
    //recursive call
    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num = 56987;
    int reversed = reverseNumber(num, 0);
    printf("Reverse of %d is: %d\n", num, reversed);
    return 0;
}
