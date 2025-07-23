#include <stdio.h>
#include <string.h>

#define SIZE 1000

char stack[SIZE];
int top = -1;

void push(char ch) {
    if (top == SIZE - 1)
        printf("Stack Overflow!\n");
    else {
        stack[++top] = ch;
    }
}

char pop() {
    if (top == -1)
        printf("Stack Underflow!\n");
    else
        return stack[top--];
}

int isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int isBalanced(char str[]) {
    top = -1; // reset stack for each test case
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            char open = pop();
            if (!isMatching(open, ch)) {
                return 0;
            }
        }
    }
    return top == -1; 
}

int main() {
    int T,i=0;
    int caseNum=1;
    char str[SIZE];

    printf("Enter the number of cases: ");
    scanf("%d", &T); 

    while (i<T) {
        printf("Case %d: ", caseNum);
        scanf("%s", str);
        if (isBalanced(str))
            printf("1\n");
        else
            printf("0\n");
        caseNum++;
        i++;
    }

    return 0;
}
