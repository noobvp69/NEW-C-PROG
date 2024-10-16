#include <stdio.h>

// Function to remove newline character, if present
void removeNewline(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';  // Replace newline with null terminator
            break;
        }
        i++;
    }
}

// Function to compare two strings manually
int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Compare characters of both strings one by one
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (str1[i] - str2[i]);  // Return ASCII difference
        }
        i++;
    }

    // Check if both strings ended at the same point
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;  // Strings are equal
    } else if (str1[i] == '\0') {
        return -1;  // str1 is shorter
    } else {
        return 1;   // str2 is shorter
    }
}

int main() {
    char str1[100], str2[100];
    int result;

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    removeNewline(str1);  // Remove newline from the first string

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    removeNewline(str2);  // Remove newline from the second string

    // Compare the strings without using strcmp
    result = compareStrings(str1, str2);

    // Display the result
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result > 0) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("The first string is smaller than the second string.\n");
    }

    return 0;
}

