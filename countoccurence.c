#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int countOccurences(char* str, char* toSearch) {
    int i, j, found, count;
    int stringLen, searchLen;
    stringLen = strlen(str);
    searchLen = strlen(toSearch);
    count = 0;

    // Iterate through the string
    for (i = 0; i <= stringLen - searchLen; i++) {
        found = 1;
        // Check if the substring matches
        for (j = 0; j < searchLen; j++) {
            if (str[i + j] != toSearch[j]) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[MAX_SIZE];
    char toSearch[MAX_SIZE];
    int count;

    // Input the main string
    printf("Enter any string: ");
    fgets(str, MAX_SIZE, stdin);

    // Remove newline character from the string, if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Input the word to search
    printf("Enter word to search occurrences: ");
    fgets(toSearch, MAX_SIZE, stdin);

    // Remove newline character from the search string, if present
    len = strlen(toSearch);
    if (len > 0 && toSearch[len - 1] == '\n') {
        toSearch[len - 1] = '\0';
    }

    // Count occurrences
    count = countOccurences(str, toSearch);

    // Print the result
    printf("Total occurrences of '%s': %d\n", toSearch, count);

    return 0;
}

