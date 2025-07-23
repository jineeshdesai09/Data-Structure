#include <stdio.h>
#include <string.h>

#define MAX 1000

int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void reversePrefix(char str[], int index) {
    int start = 0;
    int end = index - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int T, j=1;
    printf("Enter number of test cases: ");
    scanf("%d", &T);

    while (j<=T) {
        int N;
        char S[MAX];

        printf("Enter length of string: ");
        scanf("%d", &N);
        printf("Enter the string: ");
        scanf("%s", S);

        for (int i = 0; i < N; i++) {
            if (isVowel(S[i])) {
                reversePrefix(S, i);
            }
        }

        printf("Final String: %s\n", S);
        j++;
    }

    return 0;
}
