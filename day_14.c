//linear search 
#include<stdio.h>
int main(){
    int n , i , key , found = 0;
    printf("enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element:\n",n);
    for(i= 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n ; i++){
        if(arr[i] == key){
            printf("element %d found at index %d.\n", key , i);   
            found = 1;
            break;
        }
    }
    if(!found){
        printf("element %d not found int the array.\n",key);
    }
    return 0;
}

//frequency of an element
#include<stdio.h>
int main(){
    int i, n , target , count=0;
    printf("enter the size of an array:");
    scanf("%d", &n);
    int arr[n];
    printf("eneter %d elements:\n", n);
    for(i =0; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter the element to find its frequency: ");
    scanf("%d",&target);
    for(i = 0; i<n ; i++){
        if(arr[i] == target){
            count ++;
        }
    }
    printf("the element %d occurs %d time in the array.\n", target,count);
    return 0;

}

//second largest

#include<stdio.h>
int main(){
    int i, n , j , temp;
    printf("enter the size of an array:");
    scanf("%d", &n);
    if(n<2){
        printf("array must contain atleast 2 elements");
        return 1;
    }
    int arr[n];
    printf("eneter %d elements:\n", n);
    for(i =0; i<n ; i++){
        scanf("%d", &arr[i]);
    }
  for(i = 0 ; i < n - 1; i++){
    for(j=0;j< n - i - 1 ; j++){
        if(arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
  }
  int largest = arr[n-1];
  int sec_largest = -1;
  int found = 0;
  for(i = n-2; i>=0; i--){
    if(arr[i] != largest){
        sec_largest = arr[i];
        found = 1;
        break;
    }
  }
  if(found){
    printf("the second largest number is : %d",sec_largest);
  }else{
    printf("all elements are equal");
  
  }
    return 0;

}

//duplicates in the array
#include<stdio.h>
int main(){
    int i, n , j , flag = 0;
    printf("enter the size of an array:");
    scanf("%d", &n);
    int arr[n];
    int visited[n];
    printf("eneter %d elements:\n", n);
    for(i =0; i<n ; i++){
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }
    printf("duplicate element in the given array: \n");
  for(i = 0 ; i < n; i++){
    if(visited[i] == 1){
        continue;
    }
  int duplicate = 0;
  for(j = i+1 ; j<n ; j++){
    if(arr[i] == arr[j]){
        visited[j] = 1;
        duplicate = 1;
    }
  }

  
  if(duplicate == 1){
    printf("%d ", arr[i]);
    flag =1;
  }
}
if(flag == 0){
    printf("no duplicate element found.");
  
}
  printf("\n");
    return 0;

}