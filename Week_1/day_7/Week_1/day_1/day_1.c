//n natural number

#include<stdio.h>
int main()
{
    int n , sum = 0;
    printf("enter the positive integer : ");
    scanf("%d",&n);

    //for loop
    for(int i = 1; i<=n ; i++)
    {
        sum = sum + i;
    }
    printf("the sum of the first %d natural numbers is: %d \n", n, sum);
    return 0;
}

//multiplication table of any number

#include<stdio.h>
int main()
{
    int i , n , m = 1;
    printf("enter the number:");
    scanf("%d",&n);

    for(int i = 1 ; i<=10; i++)
    {
        m = n*i;
    
    printf("%d * %d = %d \n", n , i , m);
    
    }
    return 0;
}

//factorial of n number

#include<stdio.h>
int main()
{
    int i , n , fact = 1 ;
    printf("enter the number :");
    scanf("%d",&n);
{
    for(i=1; i <=n;i++)
    fact = fact*i;
}
printf("factorial of %d = %d",n,fact);

return 0;

}


// count

#include<stdio.h>
int main()
{
    int i , n , count =0;
    printf("enter the digit to count :");
    scanf("%d",&n);

    if (n==0)
    {
        count = 1;
    }

    else {
    while (n!=0)
    {
        n = n/10;
        count++;
    }
    }
    printf("the number of digit : %d", count);
   
    return 0;
   
}
