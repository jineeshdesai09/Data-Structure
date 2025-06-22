// B_58
#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};

// Insert node at beginning
struct node *insertAtFirst(struct node *first) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return first;
    }
    printf("Enter data you want to insert at first: ");
    scanf("%d", &newNode->info);
    newNode->link = first;
    first = newNode;
    return first;
}

// Insert node at end
struct node *insertAtEnd(struct node *first) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return first;
    }
    printf("Enter data you want to insert at end: ");
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
    return first;
}

// Display a linked list
void display(struct node *first) {
    if (first == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *save = first;
    printf("Linked List: ");
    while (save != NULL) {
        printf("%d -> ", save->info);
        save = save->link;
    }
    printf("NULL\n");
}

// Compare two linked lists
int compareLists(struct node *first1, struct node *first2) {
    while (first1 != NULL && first2 != NULL) {
        if (first1->info != first2->info) {
            return 0;
        }
        first1 = first1->link;
        first2 = first2->link;
    }
    return (first1 == NULL && first2 == NULL); // Return 1 if both NULL, else 0
}

int main() {
    struct node *first1 = NULL;
    struct node *first2 = NULL;
    int choice, listChoice;

    do {
        printf("\nMain Menu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Display\n");
        printf("4. Compare Two Linked Lists\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            printf("Which List (1 or 2)? ");
            scanf("%d", &listChoice);
        }

        switch (choice) {
            case 1:
                if (listChoice == 1)
                    first1 = insertAtFirst(first1);
                else if (listChoice == 2)
                    first2 = insertAtFirst(first2);
                else
                    printf("Invalid list choice.\n");
                break;

            case 2:
                if (listChoice == 1)
                    first1 = insertAtEnd(first1);
                else if (listChoice == 2)
                    first2 = insertAtEnd(first2);
                else
                    printf("Invalid list choice.\n");
                break;

            case 3:
                if (listChoice == 1) {
                    printf("List 1:\n");
                    display(first1);
                } else if (listChoice == 2) {
                    printf("List 2:\n");
                    display(first2);
                } else {
                    printf("Invalid list choice.\n");
                }
                break;

            case 4:
                if (compareLists(first1, first2))
                    printf("Both linked lists are the SAME.\n");
                else
                    printf("Linked lists are NOT the same.\n");
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
