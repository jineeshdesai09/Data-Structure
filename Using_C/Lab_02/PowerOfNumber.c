#include <stdio.h>

int main() {
    int base, exponent;
    long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d^%d = %ld", base, exponent, result);

    return 0;
}
