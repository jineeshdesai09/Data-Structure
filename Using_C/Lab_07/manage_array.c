#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int peek() {
    if (top == -1) {
        return -1;
    }
    return stack[top];
}

int main() {
    int testCase;
    printf("Enter the TestCase: ");
    scanf("%d", &testCase);
    
    while (testCase--) {
        int n;
        printf("Enter the length of Array");
        scanf("%d", &n);

        int A[MAX], B[MAX];
        int b_index = 0;
        top = -1;  
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }

        int expected = 1;
        int a_index = 0;

        while (a_index < n || top != -1) {
            if (peek() == expected) {
                B[b_index++] = pop();
                expected++;
            } else if (a_index < n) {
                push(A[a_index++]);
            } else {
                break;
            }
        }

        if (expected == n + 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
