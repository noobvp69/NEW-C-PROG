#include<stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int n, ognum, rem, result = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Store original number
    ognum = n;
    
    // Calculate the number of digits
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    
    // Calculate the Armstrong number sum without using pow()
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        result += power(rem, digits); // Use the custom power function
        temp /= 10;
    }
    
    // Check if the number is Armstrong
    if (result == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    
    return 0;
}

