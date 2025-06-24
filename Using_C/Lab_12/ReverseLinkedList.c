// ReverseLinkedList
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

//insertAtFirst
struct node *insertAtFirst(struct node *first, int val){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode ->info = val;
    newNode ->link = first;
    first = newNode;
    return first;
}

void display(struct node *first){
    if (first == NULL)
    {
        printf("List is Empty");
        return;
    }
    else{
        struct node *save = first;
        while (save != NULL)
        {
            printf("%d ->", save ->info);
            save = save ->link;
        }
        printf(" NULL \n");
    }
}

struct node *reverseList(struct node *first){
    struct node *prev = NULL, *curr = first, *next = NULL;

    while (curr != NULL)
    {
        next = curr ->link;
        curr ->link = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){
    struct node *first = NULL;
    int val;
    int opr=0;

    do
    {
        printf("Enter data you want Add:");
        scanf("%d", &val);
        first = insertAtFirst(first, val);

        printf("do you want caontinue: 1.Yes / 0.NO \n");
        scanf("%d",&opr);
    } while (opr);
    
    printf("Orignal List:");
    display(first);

    first = reverseList(first);

    printf("Reverse List is:");
    display(first);

    return 0;
}