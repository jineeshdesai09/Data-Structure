#include <stdio.h>
#define size 10

struct priority_queue
{
    int data;
    int priority;
};

struct priority_queue Queue[size];
int front = -1;
int rear = -1;

void enqueue(int x, int y)
{
    if (rear == size - 1)
    {
        printf("Queue Overflow");
        return;
    }

    rear++;
    Queue[rear].data = x;
    Queue[rear].priority = y;

    if (front == -1)
    {
        front = 0;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is underflow");
        return;
    }

    int max_i = front;
    for (int i = front + 1; i <= rear; i++)
    {
        if (Queue[i].priority > Queue[max_i].priority)
        {
            max_i = i;
        }
    }
    printf("Deleted Element is: {%d : %d}\n", Queue[max_i].data, Queue[max_i].priority);
    for (int i = max_i; i <= rear; i++)
    {
        Queue[i] = Queue[i + 1];
    }
    rear--;
}

void display()
{
    if (front == -1)
    {
        printf("Queue is Empty");
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        printf("{%d : %d}\n", Queue[i].data, Queue[i].priority);
    }
}

void main(){
    int val, pri;
    int choice;
    while (1)
    {
        printf("Enter 1 for Enqueue:\nEnter 2 for Dequeue:\nEnter 3 for Display:\nEnter 4 for Exit: \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            printf("Enter Priority: ");
            scanf("%d", &pri);
            enqueue(val,pri);
            break;
        
        case 2:
            dequeue();
            break;

        case 3:
            printf("Display::\n");
            display();
            break;

        case 4:
            printf("Byee Bye!!");
            return;
        default:
            break;
        }
    }
}