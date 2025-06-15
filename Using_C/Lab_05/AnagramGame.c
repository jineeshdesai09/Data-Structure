//AnagramGame
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void sortString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}


int isAnagram(char a[], char b[]) {
    char sortedA[100], sortedB[100];
    strcpy(sortedA, a);
    strcpy(sortedB, b);
    toLowerCase(sortedA);
    toLowerCase(sortedB);
    sortString(sortedA);
    sortString(sortedB);
    return strcmp(sortedA, sortedB) == 0;
}

int main() {
    int n;
    char input[100];
    char choice;

    srand(time(0));

    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[n][100];

    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    do {
        int index = rand() % n;
        printf("\nAnagram challenge word: %s\n", words[index]);

        printf("Enter anagram of the word: ");
        scanf("%99s", input);

        if (isAnagram(words[index], input)) {
            printf("Correct! '%s' is an anagram of '%s'.\n", input, words[index]);
        } else {
            printf("Incorrect. '%s' is not an anagram of '%s'.\n", input, words[index]);
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice); 
    } while (choice == 'y' || choice == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}