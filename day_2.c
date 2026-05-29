//sum of digits of a number

#include<stdio.h>
int main()
{
    int  num , sum = 0 , digit;
    printf("enter the digit:");
    scanf("%d",&num);

    while(num>0)
    {
        digit = num%10;
        sum = sum + digit;
        num = num/10;
    }
    printf("the sum of digits is : %d",sum);
    return 0 ;
}

//reverse of the number

#include<stdio.h>
int main()
{
    int num , rev =0 , digit ;
    printf("enter the digit:");
    scanf("%d",&num);

    while(num>0)
    {
        digit = num%10;
        rev = rev*10+digit;
        num = num/10;
    }
    printf("the reverse number is:%d",rev);
    return 0;

}

// product of digit

#include<stdio.h>
int main()
{
    int num , product = 1, digit;
    printf("enter the number:");
    scanf("%d",&num);

    while(num>0)
    {
        digit = num%10;
        product = product*digit;
        num = num/10;
    }
    printf("the product of the number is: %d",product);
    return 0;

}

// check the number is palindrom 
#include<stdio.h>
int main()
{
    int num , rev= 0, digit , temp;
    printf("enter the number:");
    scanf("%d",&num);

    temp = num;

    while(num>0)
    {
        digit = num%10;
        rev = rev*10+digit;
        num = num/10;
    }

    if(temp==rev)
    printf("the number is palindrom");

    else
    printf("the number is not palinndrom");

    return 0;

}
