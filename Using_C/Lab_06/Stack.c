// A_34
#include <stdio.h>
#define SIZE 100
int stack[SIZE];
int top = -1;

void push(int value)
{
    if (top == SIZE - 1)
        printf("Stack Overflow!\n");
    else
    {
        stack[++top] = value;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

void display()
{
    if (top == -1)
        printf("Stack is empty.\n");
    else
    {
        printf("Stack elements: \n\n");
        for (int i = top; i >= 0; i--)
            printf("| %2d |\n", stack[i]);
        printf("|______|\n");
    }
}

int peep(int pos)
{
    if (top - pos + 1 < 0 || pos <= 0)
        printf("Invalid position!\n");
    else
        return stack[top - pos + 1];
}

void change(int pos, int val)
{
    if (top - pos + 1 < 0 || pos <= 0)
        printf("Invalid position!\n");
    else
    {
        stack[top - pos + 1] = val;
        printf("Value changed successfully.\n");
    }
}

int main()
{
    int choice, val, pos, x;
    while (1)
    {
        printf("\n--- Stack Menu ---\n");
        printf("1. PUSH\n2. POP\n3. DISPLAY\n4. PEEP\n5. CHANGE\n6. EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            x = pop();
            printf("popped element: %d", x);
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Enter position from top (1 for top element): ");
            scanf("%d", &pos);
            x = peep(pos);
            printf("peeped element: %d", x);
            break;
        case 5:
            printf("Enter position from top: ");
            scanf("%d", &pos);
            printf("Enter new value: ");
            scanf("%d", &val);
            change(pos, val);
            break;
        case 6:
            return 0;
        default:
            printf("Invalid choice.\n");
        }
    }
}