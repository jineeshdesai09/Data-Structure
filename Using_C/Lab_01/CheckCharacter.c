// CheckCharacter
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {

        printf("character %c is a vowel", ch);
    }
    else {
        printf("character %c is a consonant", ch);
    }

    return 0;
}