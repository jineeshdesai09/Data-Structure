// PriorityQueue
#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    int priority;
    struct node* link;
};

struct node* insert(struct node* priorityQueue, int x, int priority){

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->priority = priority;
    newNode->link = NULL;

    if(priorityQueue == NULL) return newNode;
    // //higher priority means 5 is bigger than 1
    // if(priority > priorityQueue->priority){
    //     newNode->link = priorityQueue;
    //     return newNode;
    // }

     //lower priority means 1 is bigger than 5
    if(priority < priorityQueue->priority){
        newNode->link = priorityQueue;
        return newNode;
    }

    struct node* save = priorityQueue;
    while(save->link != NULL && priority >= save->link->priority){
        save = save->link;
    }

    newNode->link = save->link;
    save->link = newNode;    

    return priorityQueue;
}

void display(struct node* first){
    if(first == NULL){
        printf("\nList is empty\n");
    }
    printf("\n");
    struct node* save = first;
    
    while (save != NULL)
    {
        printf("| %d | %d |->",save->info, save->priority);
        save = save->link;
    }
    printf("NULL");
    printf("\n");
    
}

void main(){
    int choice, data, priority;
    struct node* queue = NULL; 

    while(1){

        printf("Select operation : \n");
        printf("1) Enqueue\n");
        printf("2) Display \n");
        printf("3) EXIT \n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter number : ");
            scanf("%d", &data);
            
            printf("Enter priority : ");
            scanf("%d", &priority);

            queue = insert(queue,data,priority);
            break;
        case 2:
            display(queue);
            break;
        case 3: return;
        default:
            break;
        }

    }

}