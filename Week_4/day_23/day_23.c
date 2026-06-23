//non repeating character
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count[256] = {0};
    char result = '\0';

    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);

    for(int i = 0; str[i] != '\0'; i++){
        if(count[(unsigned char)str[i]]++);
    }
    for(int i =0; str[i] != '\0' ; i++){
        if(count[(unsigned char)str[i]] == 1){
            result = str[i];
            break;
        }
    }
    if(result != '\0'){
        printf("first non-repeating: '%c'\n",result);
    }
    else{
        printf("no non-repeating charaters found.\n");
    }
    return 0;
}


//first repeating character
#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0}; 
    char result = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
    for (int j = 0; str[j] != '\0'; j++) {
        int ascii = (unsigned char)str[j];

        if (count[ascii] == 1) {
            result = str[j];
            break; 
        }
        count[ascii]++;
    }
    if (result != '\0') {
        printf("First repeating character is: '%c'\n", result);
    } else {
        printf("No repeating character found.\n");
    }
    return 0;
}

//check anagram string 
#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int count[256] = {0}; 
    int isAnagram = 1; 
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') { str1[i] = '\0'; break; }
        i++;
    }
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    int j = 0;
    while (str2[j] != '\0') {
        if (str2[j] == '\n') { str2[j] = '\0'; break; }
        j++;
    }

    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;
    //Anagram Logic
    if (len1 != len2) {
        isAnagram = 0;
    } else {
        for (int k = 0; str1[k] != '\0'; k++) {
            count[(unsigned char)str1[k]]++;
            count[(unsigned char)str2[k]]--;
        }
        for (int k = 0; k < 256; k++) {
            if (count[k] != 0) {
                isAnagram = 0; 
                break;
            }
        }
    }
    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are NOT anagrams.\n");
    }

    return 0;
}

//maximum occuring character
#include <stdio.h>
int main() {
    char str[100];
    int count[256] = {0};
    int max = -1;
    char result = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
    for (int j = 0; str[j] != '\0'; j++) {
        count[(unsigned char)str[j]]++;
    }
    for (int j = 0; str[j] != '\0'; j++) {
        int ascii = (unsigned char)str[j];
        
        if (max < count[ascii]) {
            max = count[ascii];
            result = str[j];
        }
    }
    printf("Maximum occurring character is '%c', appearing %d times.\n", result, max);

    return 0;
}
