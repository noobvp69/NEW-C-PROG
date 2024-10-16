#include <stdio.h>
#include <ctype.h>  // for tolower function

int main() {
    char str[100];
    int vowels = 0, specialChars = 0, i = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    while (str[i] != '\0') {
        char ch = tolower(str[i]); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }

        else if (!isalnum(ch) && ch != ' ' && ch != '\n') {
            specialChars++;
        }
        
        i++;
    }

    // Output the counts
    printf("Number of vowels: %d\n", vowels);
    printf("Number of special characters: %d\n", specialChars);

    return 0;
}

