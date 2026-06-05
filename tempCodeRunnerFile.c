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
