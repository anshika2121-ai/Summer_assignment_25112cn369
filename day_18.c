//bubble sort
#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {34, 45, 12, 5 , 54};
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    bubbleSort(arr, n); 
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
    printf("%d ", arr[i]);
    return 0;
}

//selection sort
#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; 
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
int main() {
    int arr[] = {54, 29, 12, 62, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}

//binary search
#include <stdio.h>
int binarySearch(int arr[], int n, int target) {
    int low = 0;        
    int high = n - 1;     

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid; 
        }
        if (arr[mid] < target) {
            low = mid + 1; 
        } 
        else {
            high = mid - 1;
        }
    }
    return -1; 
}
int main() {
    int arr[] = {2, 3, 4, 10, 40}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    
    int result = binarySearch(arr, n, target);
    if (result != -1) printf("Element found at index: %d", result);
    else printf("Element not found");
    return 0;
}


//sort array in descending order
#include <stdio.h>
void sortDescending(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {12, 45, 5, 90, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sortDescending(arr, n);
    
    printf("Descending order: ");
    for (int i = 0; i < n; i++) 
    printf("%d ", arr[i]);
    return 0;
}