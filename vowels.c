#include <stdio.h>
#include <string.h>  // For strlen function

int main() {
    char str[200];  // Character array to store the string
    int i, vowels, consonants, digits, spaces, special;  // Variables for counting

    vowels = consonants = digits = spaces = special = 0;  // Initialize all counters to zero

    printf("Enter a line of string: ");
    fgets(str, sizeof(str), stdin);  // Using fgets instead of gets for safety

    // Loop through the string until the null terminator
    for (i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') {
            ++vowels;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            ++consonants;
        } else if (str[i] >= '0' && str[i] <= '9') {
            ++digits;
        } else if (str[i] == ' ') {
            ++spaces;
        } else if (str[i] != '\n') {  // Ignore newline character that fgets captures
            ++special;
        }
    }

    // Output the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Special characters: %d\n", special);

    return 0;
}


