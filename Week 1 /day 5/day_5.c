// check perfect number

#include<stdio.h>
int main(){
    int n , sum =0;

    printf("enter a number:");
    scanf("%d",&n);

    if(n<=1){
        printf("the number is not a perfect number");
    }
    else{
        for(int i = 1;i<=n/2;i++){
            if(n%i==0){
                sum = sum+i;
            }
        }
        if(sum==n){
            printf("%d in a perfect number",n);
        }
        else{
            printf("%d is not a perfect number",n);
        }
        
    }
return 0;
}


//strong number
#include <stdio.h>

int main() {
    int n, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        int digit = temp % 10;   // Get the last digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;            
        temp /= 10;              
    }

    if (sum == n) {
        printf("%d is a Strong Number\n", n);
    } else {
        printf("%d is NOT a Strong Number\n", n);
    }

    return 0;
}

//print factors of number
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

//largest prime factor

#include <stdio.h>

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    
    long long temp = n;
    long long i = 2;

    while (n > 1) {
        if (n % i == 0) {
            n = n / i; 
        } else {
            i++;     
        }
    }

    printf("Largest prime factor of %lld is %lld\n", temp, i);

    return 0;
}
