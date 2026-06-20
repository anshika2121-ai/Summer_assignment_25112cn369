// //generate fibonacci
#include<stdio.h>
int main()
{
    int i,n=10,a = 0 ,b = 1 , c;

    printf("Fibonacci Series:");
  

    for(i=1;i<=n;i++)
    {
        printf("%d ", a);
        c = a+b;
        a=b;
        b=c;
    }
    printf("\n");
    return 0;

}

//nth fibonacci term

#include<stdio.h>
int main()
{
    int i , n , a = 0 , b = 1, c;

     printf("enter the positon:");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
        c =a+b;
        a=b;
        b=c;
     }
     printf("the nth fibonacci term is: %d", a);
     return 0;
}

// //check armstrong 
#include<stdio.h>
#include<math.h>
int main(){
    int num, original ,temp,rem ,i=0, sum =0;
    printf("enter the number:");
    scanf("%d",&num);
    original = num;

    //count 
    temp = num;
    while(temp!=0){
        i++;
        temp = temp/10;
    }
    temp = num;
    while(temp!=0){
        rem =temp%10;
        sum  = sum + round(pow(rem,i));
        temp = temp/10;
    }
    if(sum == original){
        printf("%d is an armstrong number.\n",original);
    }
    else{
        printf("%d is not an armstrong number.\n",original);
    }
    return 0;
    
}

// //print armstrong number in a range

#include<stdio.h>
#include<math.h>
int main(){
    int  temp,num,i,sum , rem,start, end;
    printf("enter the start and end of the series:");
    scanf("%d , %d",&start,&end );

    for(num = start;num<=end;num++){
        i = 0;
        sum =0;

        temp = num;
        while(temp !=0){
            i++;
            temp = temp/10;
        }
        temp = num;
        while(temp!=0){
            rem = temp%10;
            sum = sum + round(pow(rem,i));
            temp = temp/10;
        }
        if(sum==num){
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;

}

