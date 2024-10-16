#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[50];  // Increased size for buffer safety
    int p = 0, r = 0, i = 0, j = 0, n = 0;

    // Input first string
    printf("Enter First String: ");
    fgets(a, sizeof(a), stdin);

    // Remove newline character from the first string if present
    r = strlen(a);
    if (r > 0 && a[r - 1] == '\n') {
        a[r - 1] = '\0';
        r--;  // Adjust the length
    }

    // Input second string
    printf("Enter Second String: ");
    fgets(b, sizeof(b), stdin);

    // Remove newline character from the second string if present
    n = strlen(b);
    if (n > 0 && b[n - 1] == '\n') {
        b[n - 1] = '\0';
        n--;  // Adjust the length
    }

    // Input the position where the second string will be inserted
    printf("Enter the position where the substring has to be inserted: ");
    scanf("%d", &p);

    // Check if the position is valid
    if (p < 0 || p > r) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift the characters in `a` to make room for `b`
    for (i = r; i >= p; i--) {
        a[i + n] = a[i];
    }

    // Insert the second string `b` into `a`
    for (i = 0; i < n; i++) {
        a[p + i] = b[i];
    }

    // Print the resultant string
    printf("Resultant String: %s\n", a);

    return 0;
}

