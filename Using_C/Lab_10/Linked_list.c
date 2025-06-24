// Linked_list
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int info;
    struct node *link;
};

struct node *first = NULL;

// Insert at beginning
void insertAtFirst() {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data to insert at beginning: ");
    scanf("%d", &newNode->info);
    newNode->link = first;
    first = newNode;
}

// Insert at end
void insertAtEnd() {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data to insert at end: ");
    scanf("%d", &newNode->info);
    newNode->link = NULL;

    if (first == NULL) {
        first = newNode;
    } else {
        struct node *save = first;
        while (save->link != NULL) {
            save = save->link;
        }
        save->link = newNode;
    }
}

// Delete from beginning
void deleteFromFirst() {
    if (first == NULL) {
        printf("Linked List is Empty\n");
        return;
    }
    struct node *save = first;
    printf("Deleted Node is: %d\n", first->info);
    first = first->link;
    free(save);
}

// Delete from end
void deleteFromEnd() {
    struct node *pred = first;
    struct node *save = first->link;

    while (save->link != NULL) {
        pred = save;
        save = save->link;
    }

    printf("Deleted Node is: %d\n", save->info);
    pred->link = NULL;
    free(save);
}

// Delete from specified position
void deleteFromPosition() {
    if (first == NULL) {
        printf("List is Empty\n");
        return;
    }

    int pos, i = 1;
    printf("Enter position to delete: ");
    scanf("%d", &pos);

    struct node *pred = first;
    struct node *save = pred ->link;

    while (i< pos-1 && pred ->link != NULL)
    {
        pred = pred ->link;
        i++;
    }
    pred->link =save->link;
    free(save);
    

    }

// Count total nodes
void countNodes() {
    int count = 0;
    struct node *save = first;

    while (save != NULL) {
        count++;
        save = save->link;
    }

    printf("Total Number of Nodes in List is: %d\n", count);
}

// Display linked list
void display() {
    struct node *save = first;
    printf("Linked List: ");
    while (save != NULL) {
        printf("%d -> ", save->info);
        save = save->link;
    }
    printf("NULL\n");
}

// Main function
int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete from Beginning\n");
        printf("4. Delete from End\n");
        printf("5. Delete from Position\n");
        printf("6. Count Nodes\n");
        printf("7. Display List\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            insertAtFirst();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            deleteFromFirst();
            break;
        case 4:
            deleteFromEnd();
            break;
        case 5:
            deleteFromPosition();
            break;
        case 6:
            countNodes();
            break;
        case 7:
            display();
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
