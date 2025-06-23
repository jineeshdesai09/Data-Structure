// RemoveDuplicate
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};

struct node *insertAtEnd(struct node *first, int x){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode ->info = x;
    newNode ->link = NULL;

    if (first == NULL)
    {
        first = newNode;
    }
    else{
        struct node *save = first;
        while (save ->link != NULL)
        {
            save = save ->link;
        }
        save ->link = newNode;
        return first;
    }
}

void display(struct node *first){
    if (first == NULL)
    {
        printf("List is Empty");
        return;
    }
    else{
        struct node *save= first;
        while (save != NULL)
        {
            printf("%d ->", save ->info);
            save = save ->link;
        }
        printf("NULL \n");
    }
    
}

int find(struct node *first, struct node *last){
    while (first != last)
    {
        if (first ->info == last ->info)
        {
            return 1;
        }
        first = first ->link;
    }
    return 0;
}

void removeDuplicate(struct node *first){
    if (first == NULL || first ->link == NULL)
    {
        return;
    }
    struct node *save = first;
    while (save ->link != NULL)
    {
        if (find(first, save->link))
        {
            save ->link = save ->link ->link;
        }
        else{
            save = save->link;
        }
        
    }  
}

void main(){
    struct node *first = NULL;
    int x;
    int opr =0;

    do
    {
        printf("Enter the Number: \n");
        scanf("%d", &x);

        first = insertAtEnd(first, x);

        printf("Do you continue? 1.Yes / 2.NO \n");
        scanf("%d", &opr);
    } while (opr);
    
    printf("List is: \n");
    display(first);

    removeDuplicate(first);
    printf("Duplicate Remove List: \n");
    display(first);
}