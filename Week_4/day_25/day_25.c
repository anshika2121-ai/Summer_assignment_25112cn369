///merge array
#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int arr3[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n1) {
        arr3[k++] = arr1[i++];
    }
    while (j < n2) {
        arr3[k++] = arr2[j++];
    }
}
int main() {
    int arr1[] = {1, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, arr3);

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}

//common characters in string
#include <stdio.h>
#include <string.h>
void findCommonChars(char str1[], char str2[]) {
    int count1[256] = {0};
    int count2[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]] = 1;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        count2[(unsigned char)str2[i]] = 1;
    }
    // Print common elements
    printf("Common characters: ");
    for (int i = 0; i < 256; i++) {
        if (count1[i] && count2[i]) {
            printf("%c ", i);
        }
    }
    printf("\n");
}
int main() {
    char str1[] = "anshika";
    char str2[] = "chauhan";
    
    findCommonChars(str1, str2);
    return 0;
}

//sort name alphabetically
#include <stdio.h>
void sortNames(char names[][50], int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = 0;
            while (names[i][k] != '\0' && names[j][k] != '\0' && names[i][k] == names[j][k]) {
                k++;
            }
            if (names[i][k] > names[j][k]) {
                // Swap the characters 
                for (int x = 0; x < 50; x++) {
                    char temp = names[i][x];
                    names[i][x] = names[j][x];
                    names[j][x] = temp;
                }
            }
        }
    }
}
int main() {
    char names[3][50] = {"Deloitte", "Amazon", "Apple"};
    int n = 3;

    sortNames(names, n);

    printf("Sorted names alphabetically:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}

//sort words by length
#include <stdio.h>
#include <string.h>
void sortWordsByLength(char words[][50], int n) {
    char temp[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare lengths 
            if (strlen(words[j]) > strlen(words[j + 1])) {
                // Swap strings
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
}
int main() {
    char words[4][50] = {"International", "Hi", "Programming", "C"};
    int n = 4;

    sortWordsByLength(words, n);

    printf("Words sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s (Length: %lu)\n", words[i], strlen(words[i]));
    }
    return 0;
}
