// Factorial
#include <stdio.h>

long factorial(int num) {
    if (num == 0 || num == 1)
        return 1;  
    else
        return num * factorial(num - 1);
}

int main()
{
    int num;
    long factorial = 1; 
 
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("num not defined for negative numbers");
    } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        // long result = factorial(num);
        printf("Factorial of %d = %ld", num, factorial);
    }

    return 0;
}
