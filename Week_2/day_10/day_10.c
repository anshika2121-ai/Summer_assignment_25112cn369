// ques 1
#include<stdio.h>
int main(){
    int n = 5;
    for(int i = 1; i <= n ; i++){
        //for spaces
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        // for stars
        for(int k =1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}

// ques 2
#include<stdio.h>
int main(){
    int n = 5;
    for(int i = n; i >= 1 ; i--){
        //for spaces
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        // for stars
        for(int k =1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}

// ques 3

#include<stdio.h>
int main(){
    int n = 5;
    for(int i = 1; i <=n ; i++){
        //for spaces
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        // ascending numbers(1 to i)
        for(int j =1; j <= i; j++){
            printf("%d",j);
        }
        // print decending numbers(i-1 to 1)
        for(int j = i- 1; j>=1;j--){
            printf("%d",j);
        }
        printf("\n");

    }
    return 0;
}

// ques 4
#include<stdio.h>
int main(){
    int n = 5;
    for(int i = 1; i <= n ; i++){
        //for spaces
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        // ascending order
        
        for(int j =1; j <= i; j++){
            printf("%c", 'A' + j-1);
        }
        // print decending order
        for(int j = i- 1; j>=1;j--){
            printf("%c",'A'+ j-1);
        }
        printf("\n");

    }
    return 0;
}
