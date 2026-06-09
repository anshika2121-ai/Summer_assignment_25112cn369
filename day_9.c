// //code 1 
#include<stdio.h>
int main(){
    int n =5;
    for(int i = n ; i>=1;i--){
        for(int j =1;j<=i;j++){
            printf("*",i);
        }
        printf("\n");
    }
    return 0;
}

// //code 2
#include<stdio.h>
int main(){
    int n =5;
    for(int i = n ; i>=1;i--){
        for(int j =1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

//code 3
#include<stdio.h>
int main(){
    int n =5;
    for(int i = 1; i<=n;i++){
        char ch = 'A' + (i-1) ;
        for(int j =1;j<=i;j++){
            printf("%c",ch);
            
        }
        printf("\n");
    }
    return 0;
}

//code 4 
#include<stdio.h>
int main(){
    int rows = 5;
    int cols = 5 ;

    for(int i =1; i<=rows;i++){
        for(int j =1;j<=cols;j++){
            if(i == 1 || i == rows || j == 1 || j == cols){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}