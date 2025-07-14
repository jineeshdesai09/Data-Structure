// A_35
#include <stdio.h>
#include <string.h>
#define SIZE 100
char stack[SIZE];
int top = -1;

void push(char ch)
{
    if (top == SIZE - 1)
        printf("Stack Overflow!\n");
    else
    {
        stack[++top] = ch;
    }
}
char pop()
{
    if (top == -1)
        printf("Stack Underflow!\n");
    else
        return stack[top--];
}

int main()
{
    char str[SIZE];
    int i = 0;
    char next, x;
    printf("Enter the string: ");
    scanf("%s", str);
    // Step 1: initialize stack with 'c'
    top = 0;
    stack[top] = 'c';

    // Step 2: push characters before 'c'
    next = str[i];
    while (next != 'c')
    {
        if (next == '\0')
        {
            printf("Invalid String\n");
            return 0;
        }
        push(next);
        i++;
        next = str[i];
    }
    // Step 3: compare characters after 'c' with stack
    i++; // skip 'c'
    next = str[i];
    while (stack[top] != 'c')
    {
        x = pop();
        if (next == '\0' || next != x)
        {
            printf("Invalid String\n");
            return 0;
        }
        i++;
        next = str[i];
    }

    // Step 4: after match, string must end
    if (str[i] == '\0')
    {
        printf("Valid String\n");
    }
    else
    {
        printf("Invalid String\n");
    }
    return 0;
}