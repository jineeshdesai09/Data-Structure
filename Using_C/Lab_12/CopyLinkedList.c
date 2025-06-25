// CopyLinkedList
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

// insertAtFirst
struct node *insertAtFirst(struct node *first, int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = val;
    newNode->link = first;
    first = newNode;
    return first;
}

void display(struct node *first)
{
    if (first == NULL)
    {
        printf("List is Empty");
        return;
    }
    else
    {
        struct node *save = first;
        while (save != NULL)
        {
            printf("%d ->", save->info);
            save = save->link;
        }
        printf(" NULL \n");
    }
}

struct node *copyList(struct node *first)
{
    if (first == NULL)
    {
        return NULL;
    }
    struct node *begin = NULL;
    struct node *pred;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *avail = (struct node *)malloc(sizeof(struct node));
    // copy first Node
    if (avail == NULL)
    {
        printf("Underflow");
        return NULL;
    }
    newNode = avail;
    avail = avail->link;
    newNode->info = first->info;
    newNode->link = NULL;
    begin = newNode;

    struct node *save = first;

    while (save->link != NULL)
    {
        pred = newNode;
        save = save->link;

        if (avail == NULL)
        {
            printf("underflow");
            return NULL;
        }
        newNode = avail;
        avail = avail->link;
        newNode->info = save->info;

        pred->link = newNode;

        newNode->link = NULL;
    }
    return begin;
}

int main()
{
    struct node *first = NULL;
    int val;
    int opr = 0;

    do
    {
        printf("Enter the data you want add:");
        scanf("%d", &val);
        first = insertAtFirst(first, val);

        printf("Do you want continue? 0.No / 1.Yes \n");
        scanf("%d", &opr);
    } while (opr);

    printf("Original:");
    display(first);

    struct node *copiedList = copyList(first);

    printf("Copied List:");
    display(copiedList);

    return 0;
}
