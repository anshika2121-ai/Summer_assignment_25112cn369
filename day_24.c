//check string rotation
// #include <stdio.h>
// #include <string.h>
// int isRotation(char *s1, char *s2) {
//     int len1 = strlen(s1);
//     int len2 = strlen(s2);

//     if (len1 != len2) {
//         return 0; 
//     }
//     char temp[2 * len1 + 1];
//     strcpy(temp, s1);
//     strcat(temp, s1); 

//     if (strstr(temp, s2) != NULL) {
//         return 1;
//     }

//     return 0;
// }
// int main() {
//     char s1[100],s2[100];
//     printf("enter first string:");
//     fgets(s1,sizeof(s1), stdin);
//     s1[strcspn(s1, "\n")] = '\0';

//     printf("Enter Second String (s2): ");
//     fgets(s2, sizeof(s2), stdin);
//     s2[strcspn(s2, "\n")] = '\0';


//     if (isRotation(s1, s2)) {
//         printf("Yes, strings are rotations of each other.\n");
//     } else {
//         printf("No, strings are not rotations.\n");
//     }
//     return 0;
// }

// compress a string
// #include <stdio.h>
// #include <string.h>
// void compressString(char src[], char dest[]) {
//     int len = strlen(src);
//     int j = 0;

//     for (int i = 0; i < len; i++) {
//         dest[j++] = src[i];
//         int count = 1;
//         while (i + 1 < len && src[i] == src[i + 1]) {
//             count++;
//             i++; 
//         }
//         j += sprintf(&dest[j], "%d", count);
//     }
//     dest[j] = '\0'; 
// }
// int main() {
//     char src[100], dest[200];

//     printf("Enter a string to compress: ");
//     fgets(src, sizeof(src), stdin);
//     src[strcspn(src, "\n")] = '\0';

//     compressString(src, dest);
//     printf("Compressed string: %s\n", dest);
//     return 0;
// }


//find longest word
// #include <stdio.h>
// #include <string.h>
// void findLongestWord(char str[], char longest[]) {
//     int len = strlen(str);
//     int max_len = 0, max_start = 0;
//     int curr_len = 0, curr_start = 0;

//     for (int i = 0; i <= len; i++) {
//         if (str[i] == ' ' || str[i] == '\0') {
//             if (curr_len > max_len) {
//                 max_len = curr_len;
//                 max_start = curr_start;
//             }
//             curr_start = i + 1;
//             curr_len = 0;
//         } else {
//             if (curr_len == 0) {
//                 curr_start = i; 
//             }
//             curr_len++;
//         }
//     }
//     strncpy(longest, &str[max_start], max_len);
//     longest[max_len] = '\0'; 
// }
// int main() {
//     char str[200], longest[50];

//     printf("Enter a sentence: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0';

//     findLongestWord(str, longest);
//     printf("Longest word: %s\n", longest);
//     return 0;
// }


//remove duplicate
#include <stdio.h>
#include <string.h>
void removeDuplicates(char str[]) {
    int len = strlen(str);
    int seen[256] = {0}; 
    int j = 0;           

    for (int i = 0; i < len; i++) {
        unsigned char val = str[i]; 
        if (seen[val] == 0) {
            seen[val] = 1;      
            str[j++] = str[i];  
        }
    }
    str[j] = '\0'; 
}
int main() {
    char str[100];

    printf("Enter a string to remove duplicates: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}