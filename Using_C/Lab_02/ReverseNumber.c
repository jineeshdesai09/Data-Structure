// ReverseNumber
#include <stdio.h>

int main() {

    int num, rev_num = 0, remainder;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        rev_num = rev_num * 10 + remainder;
        num = num / 10;
    }

    printf("reversed number is: %d", rev_num);

    return 0;
}