 //merge two arrays
#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;
    // Copy elements from the first array
    for (i = 0; i < n1; i++) {
        result[k++] = arr1[i];
    }
    // Copy elements from the second array
    for (j = 0; j < n2; j++) {
        result[k++] = arr2[j];
    }
}
int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int result[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, result);

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}


//union of two arrays
#include <stdio.h>

void printUnion(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0;

    printf("Union: ");
    while (i < n1 && j < n2) {
        // Skip duplicates in arr1
        while (i > 0 && i < n1 && arr1[i] == arr1[i - 1])
         i++;
        // Skip duplicates in arr2
        while (j > 0 && j < n2 && arr2[j] == arr2[j - 1]) 
        j++;
        if (i < n1 && j < n2) {
            if (arr1[i] < arr2[j]) {
                printf("%d ", arr1[i++]);
            } else if (arr2[j] < arr1[i]) {
                printf("%d ", arr2[j++]);
            } else {
                printf("%d ", arr1[i]);
                i++;
                j++;
            }
        }
    }
    while (i < n1) {
        if (i == 0 || arr1[i] != arr1[i - 1]) {
            printf("%d ", arr1[i]);
        }
        i++;
    }
    while (j < n2) {
        if (j == 0 || arr2[j] != arr2[j - 1]) {
            printf("%d ", arr2[j]);
        }
        j++;
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 2, 4, 5};
    int arr2[] = {2, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printUnion(arr1, n1, arr2, n2);
    return 0;
}

//intersection of  two sorted array
#include <stdio.h>

void printIntersection(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0;
    printf("Intersection: ");
    while (i < n1 && j < n2) {
        // Skip duplicates in arr1
        if (i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    printf("\n");
}
int main() {
    int arr1[] = {1, 2, 2, 4, 5, 9};
    int arr2[] = {2, 2, 3, 5, 7, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printIntersection(arr1, n1, arr2, n2);
    return 0;
}

//common elements in three sorted array
#include <stdio.h>

void findCommon(int arr1[], int n1, int arr2[], int n2, int arr3[], int n3) {
    int i = 0, j = 0, k = 0;
    printf("Common Elements: ");
    while (i < n1 && j < n2 && k < n3) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {  
            if (i == 0 || arr1[i] != arr1[i - 1]) {
                printf("%d ", arr1[i]);
            }
            i++; j++; k++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else {
            k++;
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    findCommon(arr1, n1, arr2, n2, arr3, n3);
    return 0;
}
