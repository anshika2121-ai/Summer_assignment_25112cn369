 // prime or not

#include<stdio.h>
int main()
{
    int i , num , count = 0;
    
    printf("enter the number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;   
        }
    }
        if(count ==2) // a prime num has exactly 2 factors ; 1 and itself
        {
            printf("%d is a prime number.",num);
        }
        else{
            printf("%d is not a prime number.",num);
        }    
    

    return 0;


}



// //prime number in a range

#include<stdio.h>
int main()
{
    int i, first , last , count = 0;
     
    printf("enter first and last number:");
    scanf("%d %d",&first,&last);

    printf("prime numbers are: ");

    for(i=first;i<=last;i++)
    {
        if(i<=1)
        {
            continue; //skip 0 and 1
        }
        count = 0;
    

    for(int j =1;j<=i;j++)
    {
        if(i%j==0){
            count++;
        }
    }
    if(count==2)
    {
        printf("%d ", i);
    }
    }

    printf("\n");
    return 0;
     
}

// // GCD of two numbers

#include<stdio.h>
int main()
{
    int num1 , num2, a,b,temp;

    printf("enter two numbers:");
    scanf("%d %d ",&num1,&num2);

    a = num1;
    b = num2;

    while(b != 0)
    {
        temp = b;
        b =a%b;
        a = temp;
    }
    printf("GCD of %d and %d is : %d \n",num1,num2,a);

    return 0;


}

// // LCM of two numbers

#include<stdio.h>
int main()
{
    int num1 , num2, a,b,temp,lcm , gcd;

    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);

    a = num1;
    b = num2;

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
     gcd = a ;
     lcm = (num1 * num2)/ gcd;

    printf("LCM od %d and %d is :  %d \n", num1 ,num2, lcm);

    return 0;


}