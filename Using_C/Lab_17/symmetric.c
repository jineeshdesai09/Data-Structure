#include <stdio.h>
#include <stdlib.h>

struct treenode
{
    int info;
    struct treenode *lptr;
    struct treenode *rptr;
};

struct treenode *newNode(int data)
{
    struct treenode *node = (struct treenode *)malloc(sizeof(struct treenode));
    node->info = data;
    node->lptr = node->rptr = NULL;
    return node;
}

//  set elements in balanced manner
int minHeight(struct treenode *root)
{
    if (root == NULL)
        return 0;
    int rptr = minHeight(root->rptr);
    int lptr = minHeight(root->lptr);
    if (rptr < lptr)
        return rptr + 1;
    return lptr + 1;
}

struct treenode *insert(struct treenode *root, int val)
{
    if (root == NULL)
    {
        root = (struct treenode *)malloc(sizeof(struct treenode));
        root->lptr = NULL;
        root->rptr = NULL;
        root->info = val;
        return root;
    }
    if (root->lptr == NULL)
        root->lptr = insert(root->lptr, val);
    else if (root->rptr == NULL)
        root->rptr = insert(root->rptr, val);
    else
    {
        int lptr = minHeight(root->lptr);
        int rptr = minHeight(root->rptr);
        if (rptr < lptr)
        {
            root->rptr = insert(root->rptr, val);
        }
        else
        {
            root->lptr = insert(root->lptr, val);
        }
    }
    return root;
}

int sameTree(struct treenode *root1, struct treenode *root2)
{
    if (root1 == NULL && root2 == NULL)
        return 1;
    if (root1 == NULL || root2 == NULL)
        return 0;
    if (root1->info != root2->info)
        return 0;
    return (sameTree(root1->lptr, root2->rptr) && sameTree(root1->rptr, root2->lptr));
}

int symmetric(struct treenode *root)
{
    if (root == NULL)
        return 1;
    if (root->lptr == NULL && root->rptr == NULL)
        return 1;
    if (root->lptr == NULL || root->rptr == NULL)
        return 0;
    return sameTree(root->lptr, root->rptr);
}

void inOrder(struct treenode *root)
{
    if (root == NULL)
        return;
    printf("[");
    inOrder(root->lptr);
    printf(" %d ", root->info);
    inOrder(root->rptr);
    printf("]");
}

int main() {
    struct treenode *root = NULL;
    int n, val;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        root = insert(root, val);
    }

    printf("\nIn-order traversal of the tree:\n");
    inOrder(root);

    if (symmetric(root))
        printf("\nThe tree is symmetric.\n");
    else
        printf("\nThe tree is NOT symmetric.\n");

    return 0;
}