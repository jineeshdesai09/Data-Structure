// QueueUsingLinkedList

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *front = 0;
struct node *rear = 0;

void enqueue(int x)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = x;
    newNode->link = 0;

    if (front == NULL && rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->link = newNode;
        rear = newNode;
    }
}

void dequeue()
{
    struct node *save = front;
    if (front == 0 && rear == 0)
    {
        printf("Queue is Empty");
        return;
    }
    else if (front == rear)
    {
        front = rear = 0;
        free(save);
    }
    else
    {
        front = front->link;
        free(save);
    }
}

void peekfront()
{
    if (front == 0 && rear == 0)
    {
        printf("Queue is Empty");
        return;
    }
    else
    {
        printf("Front element of Queue is: %d\n", front->info);
    }
}

void peekrear()
{
    if (front == 0 && rear == 0)
    {
        printf("Queue is Empty");
        return;
    }
    else
    {
        printf("Rear element of Queue is: %d\n", rear->info);
    }
}

void display()
{

    if (front == 0 && rear == 0)
    {
        printf("Queue is Empty");
        return;
    }
    else
    {
        struct node *save = front;
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
        printf("Menu \n");
        printf("1.EnQueue\n 2.DeQueue\n 3.FrontPeek\n 4.RearPeek\n 5.Display\n 6.Exit\n");
        printf("Enter your Choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element you want to Add: \n");
            scanf("%d", &x);
            enqueue(x);
            break;
        
        case 2:
            dequeue();
            break;

        case 3:
            peekfront();
            break;

        case 4:
            peekrear();
            break;

        case 5:
            display();
            break;

        case 6:
            printf("Exiting..");
            return 0;

        default:
            printf("Invalid");
            break;
        }
    }
    return 0;
}