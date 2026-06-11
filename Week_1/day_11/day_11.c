//function to find sum of two numbers

#include<stdio.h>
//function call
int addNumbers(int a, int b){
    return a+b;
}
int main(){
    int num1 ,num2;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    // function call
    int sum = addNumbers(num1,num2);
    printf("the sum of two numbers: %d",sum);
    return 0;

}

//function to find max of two numbers

#include<stdio.h>
//function call
int maxNumbers(int a, int b){
    if(a>b){
    return a;
    }else{
    return b;
    }
}
int main(){
    int num1 ,num2;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    // function call
    int max = maxNumbers(num1,num2);
    printf("the max of two numbers: %d \n",max);
    return 0;

}

// funnction to print a prime number

#include<stdio.h>
//function call
int primeNumber(int a){
int count = 0;
for(int i = 1;i <= a; i++){
    if(a%i==0){
        count++;
    }
}
if(count == 2){
    return 1;
}else{
    return 0;
}
}  
int main(){
    int num;
    printf("enter  number:");
    scanf("%d",&num);
   ;
    // function call
    int result= primeNumber(num);
    if(result == 1){
        printf("%d is a prime number.\n",num);
    }else{
         printf("%d is not a prime number.\n",num);

    }
    return 0;
}


//function to find factorial

#include<stdio.h>
//function call
long long factorial(int a){
    long long factorial = 1;
    for(int i = 1; i <= a; i++){
        factorial = factorial*i;
    }
    return factorial;
}   
int main(){
    int num;
    printf("enter  number:");
    scanf("%d",&num);
   
    // function call
    long long result= factorial(num);
    printf("the factorial of %d is %lld \n",num,result);
    return 0;
}
