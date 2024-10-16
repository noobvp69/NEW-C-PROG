#include <stdio.h>
#include <string.h>

int main() {
    char password[11];  // 10 characters + null terminator
    char username[10];
    char ch;
    int i = 0;

    // Input username
    printf("Enter your username: ");
    fgets(username, 10, stdin);
    
    // Remove newline character from username input
    //username[strcspn(username, "\n")] = 0;

    // Input password
    printf("Enter your password (10 characters): ");
    
    for(i = 0; i < 10; i++) {
        ch = getchar();  // Read a character from the input
        password[i] = ch;
        printf("*");  // Print asterisk to hide the input
    }
    
    password[10] = '\0';  // Null-terminate the password string

    // Output the password
    printf("\nYour password is: %s\n", password);
    
    return 0;
}

