//decimal to binary

#include<stdio.h>
int main(){
    int i =0, n, arr[32];

    printf("enter your decimal number:");
    scanf("%d",&n);

    if(n==0){
        printf("binary = %d",n);
    }
    while(n>0){
        arr[i] = n%2;
        n = n/2;
        i++;
    }

    printf("Binary ");
    for(int j = i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    printf("\n");
    return 0;
}

//binary to decimal
#include<stdio.h>
int main(){
    int deciVal = 0;
    int base = 1;
    long long binary;

    printf("enter the binary number :");
    scanf("%lld",&binary);

    long long temp = binary;

    while(temp>0){
        int lastDigit = temp%10;
        temp = temp /10;

        if(lastDigit==1){
            deciVal = deciVal+base;
        }
        base = base*2;
    }
    printf("Decimal value : %d \n",deciVal);
    return 0;
}

//count set bits in a number

#include<stdio.h>
int main(){
    int n;
    int count=0;

    printf("enter any integer :");
    scanf("%d",&n);

    int temp = n ;

    while(temp>0){
        count = count+(temp & 1);

        temp = temp>>1;
    }
    printf("number of set bits (1s) : %d\n",count);
    return 0;
}

//find x^n without pow()

#include <stdio.h>

int main() {
    double x;
    int n;
    double result = 1.0; 

    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter power (n): ");
    scanf("%d", &n);

    int isNegative = 0;
    if (n < 0) {
        isNegative = 1;
        n = -n; 
    }

    for (int i = 1; i <= n; i++) {
        result = result * x; 
    }

    if (isNegative) {
        result = 1.0 / result;
    }

    printf("Result: %.4f\n", result);

    return 0;
}