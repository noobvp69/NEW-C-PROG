#include<stdio.h>

int main() {
    int i, l, u, sum, n;

    printf("Enter the lower bound of the range: ");
    scanf("%d", &l);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &u);

    printf("Perfect numbers between %d and %d are:\n", l, u);

    
    for (n = l; n <= u; n++) {
        sum = 0;

     
        for (i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

 
        if (sum == n && n != 0) {
            printf("%d\n", n);
        }
    }

    return 0;
}

