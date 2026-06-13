//display arraay
#include<stdio.h>
int main(){
    int n , i;
    printf("enter the size of the array:");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements:");
    for(i=0; i <n; i++){
        scanf("%d", &arr[i]);
    }

    printf("the array elements are: ");
    for(i=0; i<n;i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
    
}

//sum and average of an array
#include<stdio.h>
int main(){
    int n , i, sum = 0;
    float average;

    printf("enter the size of the array:");
    scanf("%d",&n);

    int arr[n];
    printf("enter elements:");
    for(i=0; i <n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum/n; // typecast

   printf("sum = %d\n",sum);
   printf("average = %.2f\n",average);
    return 0;
    
}

//largest and smallest element
int main(){
    int n , i, max, min;
    
    printf("enter the size of the array:");
    scanf("%d",&n);

    int arr[n];
    printf("enter elements:");
    for(i=0; i <n; i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];

    for(i=1; i < n ; i++){
        if(arr[i]>max){
            max = arr[i];   
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("largest element = %d\n",max);
    printf("smallest element = %d\n",min);
    return 0;
    
}


//count even or odd
int main(){
    int n , i;
    int even_count = 0, odd_count = 0;
    
    printf("enter the size of the array:");
    scanf("%d",&n);

    int arr[n];
    printf("enter elements:");
    for(i=0; i <n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i < n ; i++){
        if(arr[i]%2 == 0){
            even_count++;  
        }else{
            odd_count++;
        }    
    }
    printf("total even  element = %d\n",even_count);
    printf("total odd  element = %d\n",odd_count);
    return 0;
    
}
