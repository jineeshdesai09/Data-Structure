#include <stdio.h>
#include <string.h>

#define SIZE 1000

char stack[SIZE];
int top = -1;

void push(char ch) {
    if (top < SIZE - 1) {
        stack[++top] = ch;
    }
}

void pop() {
    if (top != -1) {
        top--;
    }else{
        printf("Invalid String!");
    }
}

int main() {
    char s[SIZE];
    printf("Enter the string: ");
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '*') {
            pop();
        } else {
            push(s[i]);
        }
    }

    printf("Output: ");
    for (int i = 0; i <= top; i++) {
        printf("%c", stack[i]);
    }
    printf("\n");

    return 0;
}
