#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void lowerCase(char str[]){
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'A' && str[i] <= 'Z') 
      str[i] += 32; 
    i++;
  }
}

int main() 
{
    char str[MAX_SIZE];
    printf("Enter the string to check: ");
    fgets(str, MAX_SIZE, stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--; // Adjust length after removing newline
    }

    lowerCase(str);

    int i, flag = 0;

    for (i = 0; i < len / 2; i++) 
    {
        // Checking if string is palindrome or not
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("\"%s\" is not a palindrome.\n", str);
    else
        printf("\"%s\" is a palindrome.\n", str);
        
    return 0;
}

