// function for palindrom
#include<stdio.h>
#include<stdbool.h>
bool palindrom( int n){
    if(n<0) 
    return false;
    int temp = n;
    int reverseNum = 0;
    while(n >0){
        int digit = n%10;
        reverseNum = (reverseNum *10) + digit;
        n /= 10;
    }
    return temp == reverseNum;
}
int main(){
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    if(palindrom(num)){
        printf("%d is a palindrom number.\n",num);
    }else{
        printf("%d is not a palindrom number.\n",num);
    }
    return 0;
}

//armstrong
#include<stdio.h>
#include<math.h>
int armstrong(int n ){
    if(n < 0){
        return 0;
    }
    int original = n;
    int temp = n;
    int numDigit = 0;
    int sum = 0;
    //count digit
    while(temp > 0){
        numDigit++;
        temp /= 10;
    }
    temp = n;
    //calc power 
    while(temp > 0){
        int digit = temp % 10;
        sum += round(pow(digit,numDigit));
        temp /= 10;
    }
    return (original == sum);
}
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(armstrong(num)){
        printf("%d is an Armstrong number.\n", num);
    }else{
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}


// Fibonacci Series
#include<stdio.h>
void printFibonacci(int n ){
    if(n <= 0){
        return ;
    }
    
    long long first = 0;
    long long second = 1;
    long long next;
    printf("Fibonacci series up to %d terms :",n);
    for(int i = 1;i <=n ; i++){

        if(i == 1){
           printf("%lld",first);
        }
        if(i == 2){
            printf("%lld",second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%lld", next);
    }
    printf("\n");
    }

int main(){
    int terms;
    printf("enter a number of terms: ");
    scanf("%d",&terms);
    printFibonacci(terms);

    return 0;
}

//Perfect number
#include<stdio.h>
#include<math.h>
int perfectNum(int n ){
    if(n <= 1){
        return 0;
    }
    
    int sum = 0;
    for(int i = 1;i <=n/2 ; i++){

        if(n%2 == 0){
            sum += i;
        }
    }
    return (sum == n);
    }

int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(perfectNum(num)){
        printf("%d is a Perfect number.\n", num);
    }else{
        printf("%d is not a Perfect number.\n", num);
    }
    return 0;
}




