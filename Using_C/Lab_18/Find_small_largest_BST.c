#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* lptr;
    struct Node* rptr;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->lptr = node->rptr = NULL;
    return node;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL)
        return newNode(data);
    if (data < root->data)
        root->lptr = insert(root->lptr, data);
    else if (data > root->data)
        root->rptr = insert(root->rptr, data);
    return root;
}

int findMin(struct Node* root) {
    if (root == NULL) {
        printf("BST is empty.\n");
        return -1;
    }
    struct Node* curr = root;
    while (curr->lptr != NULL)
        curr = curr->lptr;
    return curr->data;
}

int findMax(struct Node* root) {
    if (root == NULL) {
        printf("BST is empty.\n");
        return -1;
    }
    struct Node* curr = root;
    while (curr->rptr != NULL)
        curr = curr->rptr;
    return curr->data;
}

int main() {
    struct Node* root = NULL;
    int n, data;

    printf("Enter number of elements to insert in BST: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert(root, data);
    }

    printf("Minimum element in BST: %d\n", findMin(root));
    printf("Maximum element in BST: %d\n", findMax(root));

    return 0;
}
