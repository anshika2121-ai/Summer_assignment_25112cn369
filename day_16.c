//missing number

#include<stdio.h>
int main(){
    int n , i , sum = 0;
    printf("enter the value of n :"); // total count of elements1 to n)
    scanf("%d", &n);
    int arr[n-1];
    printf("enter  %d elements:\n", n-1);
    for(i = 0 ; i< n -1 ; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int expected_sum = (n*(n+1))/2;
    int missing = expected_sum - sum ;
    printf("the missing number is : %d\n", missing);
    return 0;
}


//max frequency element

#include<stdio.h>
int main(){
    int n , i , j;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int visited[n];

    printf("enter %d elements:\n", n);
    for(i  =0 ; i<n;i++){
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }
    int max_element = arr[0];
    int max_count = 0;

    for(i =0; i<n; i++){
        if(visited[i] == 1){
            continue;
        }
    
    int count = 1;
    for( j = i+1; j<n; j++){
        if(arr[i] == arr[j]){
            count++;
            visited[j] =1;
        }
    }
    if(count > max_count){
        max_count = count;
        max_element = arr[i];
    }
}
  printf("element with max frequency is %d .\n" , max_element, max_count);
  return 0;
}

//pair with given sum

#include <stdio.h>

int main() {
    int n, i, j, target, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);

    printf("Pairs with sum %d are:\n", target);
    
    // Check all  pairs
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if(!found) {
        printf("No pairs found with the given sum.\n");
    }
    return 0;
}

//remove duplicate from an array

#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Logic to remove duplicates
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {    
            if(arr[i] == arr[j]) {

                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--; 
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}