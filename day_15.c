// reverse of an array
#include <stdio.h>

int main() {
    int n, i, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int start = 0;
    int end = n - 1;
    while(start < end) {
        // Swap elements
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//rotate array left
#include <stdio.h>
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, i, d;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d);

    d = d % n; 

    reverse(arr, 0, d - 1);     
    reverse(arr, d, n - 1);     
    reverse(arr, 0, n - 1);     

    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//rotate array right
#include <stdio.h>
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int n, i, d;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);
    d = d % n;
    reverse(arr, 0, n - 1);     
    reverse(arr, 0, d - 1);     
    reverse(arr, d, n - 1);     

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//move zeros to end 
#include<stdio.h>
int main(){
int n , i ;
printf("enter the size of the array:");
scanf("%d", &n);
int arr[n];
printf("enter %d elements:\n",n);
for(i = 0; i<n; i++){
    scanf("%d", &arr[i]);
}
int count = 0;
for(i=0;i < n ; i++ ){
    if(arr[i] != 0){
        arr[count] = arr[i];
        count++;
    }
}
while(count<n){
    arr[count]=0;
    count++;
}
printf("array after moving zeroes to the end:\n");
for(i = 0; i<n; i++){
    printf("%d ", arr[i]);
}
printf("\n");
return 0;
}