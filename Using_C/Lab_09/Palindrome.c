// Palindrome
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size;
    printf("Enter max length of string: ");
    scanf("%d", &size);

    char *str = (char *)malloc((size + 1) * sizeof(char)); 

    if (str == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter string: ");
    scanf("%s", str);

    char *start = str;
    char *end = str + (strlen(str) - 1) * sizeof(char);
    int isPalindrome = 1;

    while (start < end) {
        if (*start != *end) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("%s is Palindrome\n", str);
    else
        printf("%s is Not Palindrome\n", str);

    free(str);

    return 0;
}
