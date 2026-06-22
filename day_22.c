//palindrom of string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int left = 0, right;
    int isPalindrome = 1; 

    printf("Enter a string: ");
    scanf("%s", str);

    right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0; 
            break;
        }
        left++;  
        right--; 
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}


//count words
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') {
                words++;
            }
        }
        i++;
    }
    printf("Total number of words: %d\n", words);
    return 0;
}

//character frequency
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0}; 
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        freq[(unsigned char)str[i]]++;
        i++;
    }
    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }
    return 0;
}

//remove spaces from string
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, j = 0;
    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0'; 
    printf("String after removing spaces: %s\n", str);
    return 0;
}