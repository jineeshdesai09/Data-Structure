// StackUsingLinkedList
#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *top = 0;

void push(int x){
    struct node *newNode = (struct node *) malloc(sizeof(struct node));

    newNode ->info = x;
    newNode ->link = top;
    top = newNode;
}

void pop(){
    if (top == 0)
    {
        printf("Stack is Empty");
        return;
    }
    else{
        struct node *save = top;
        printf("Delete node is %d \n", save ->info);
        top = top ->link;
        free(save);
    }
}

void peek(){
    if (top == 0)
    {
        printf("Empty");
        return;
    }
    else{
        printf("top most element is %d \n", top ->info);
    }
}

void display(){
    if (top == 0)
    {
        return;
    }
    else{
        struct node *save = top;
        while (save != NULL)
        {
            printf("%d -> ", save ->info);
            save = save ->link;
        }
        printf("NULL \n");
    }
}

int main(){
    int choice, x;

    while (1)
    {
        printf("Menu Driven \n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data  you want add:");
            scanf("%d", &x);
            push(x);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;
        
        case 4:
            display();
            break;

        case 5:
            printf("Exiting...");
            return 0;
        
        default:
            printf("Invalid");
            break;
        }
    }
    return 0;
    
}
