// CircularLinkedList
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* link;
};

struct Node* FIRST = NULL;
struct Node* LAST = NULL;

//newnode
struct Node* createNode(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = x;
    newNode->link = NULL;
    return newNode;
}

//First
void insertFirst(int x) {
    struct Node* NEW = createNode(x);

    if (FIRST == NULL) {
        // Empty list case
        NEW->link = NEW;
        FIRST = LAST = NEW;
    } else {
        NEW->link = FIRST;
        LAST->link = NEW;
        FIRST = NEW;
    }

    printf("Inserted %d at front.\n", x);
}

//last 
void insertLast(int x){
    struct Node *New = createNode(x);
    if (FIRST == NULL)
    {
        New -> link =New;
        FIRST = LAST = New;
    }
    else{
        New ->link = FIRST;
        LAST->link = New;
        LAST = New;
    }
    printf("Inserted %d at end.\n", x);
    
}

//delete
void deleteNode(int x) {
    
    if (FIRST == NULL) {
        printf("Empty\n");
        return;
    }

    struct Node* SAVE = FIRST;
    struct Node* PRED = NULL;

    while (SAVE->info != x && SAVE != LAST) {
        PRED = SAVE;
        SAVE = SAVE->link;
    }

    if (SAVE->info != x) {
        printf("Node not found\n");
        return;
    }

    if (FIRST == LAST) {
        FIRST = LAST = NULL;
    } else if (SAVE == FIRST) {
        FIRST = FIRST->link;
        LAST->link = FIRST;
    } else {
        PRED->link = SAVE->link;
        if (SAVE == LAST) {
            LAST = PRED;
        }
    }

    free(SAVE);
    printf("Deleted node with value %d\n", x);
}

// Display 
void display() {
    if (FIRST == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* save = FIRST;
    printf("List: ");
    do {
        printf("%d ", save->info);
        save = save->link;
    } while (save != FIRST);
    printf("\n");
}

int main() {
    int choice, x;
    while (1)
    {
        printf("Menu\n");
        printf("1.InsertAtFirst\n 2.InsertAtEnd\n 3.Delete\n 4.Display\n 5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data");
            scanf("%d",&x);
            insertFirst(x);
            break;
        
        case 2:
            printf("Enter the data");
            scanf("%d",&x);
            insertLast(x);
            break; 
        
        case 3:
            printf("Enter the data you want delete:");
            scanf("%d", &x);
            deleteNode(x);
            break;

        case 4:
            printf("List is: ");
            display();
            break;

        case 5:
            printf("Exiting...\n");
            return 0;
        default:
            break;
        }
    }
    
    return 0;
}
