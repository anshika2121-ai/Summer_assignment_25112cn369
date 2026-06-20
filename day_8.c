//half pyramid
#include<stdio.h>
int main(){
    int n ;
    printf("enter the size of triangle:");
    scanf("%d",&n);

    for(int i = 1; i <= n ;i++){
        for(int j = 1; j <= i ;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//ques 2
#include<stdio.h>
int main(){

    for(int i = 1; i <= 5 ;i++){
        for(int j = 1; j <= i ;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

//ques 3

#include<stdio.h>
int main(){

    for(int i = 1; i <= 5 ;i++){
        char ch = 'A';
        for(int j = 1; j <= i ;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}


//ques 4
#include<stdio.h>
int main(){

    for(int i = 1; i <= 5 ;i++){
        for(int j = 1; j <= i ;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}