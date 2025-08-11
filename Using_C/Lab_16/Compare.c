#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct Node* buildTree() {
    int value;
    scanf("%d", &value);

    if (value == -1)  
        return NULL;

    struct Node* root = createNode(value);
    printf("Enter left child of %d (-1 for no node): ", value);
    root->left = buildTree();
    printf("Enter right child of %d (-1 for no node): ", value);
    root->right = buildTree();

    return root;
}

int isSame(struct Node* root1, struct Node* root2) {
    if (root1 == NULL && root2 == NULL) return 1;
    if (root1 == NULL || root2 == NULL) return 0;
    return (root1->data == root2->data) &&
           isSame(root1->left, root2->left) &&
           isSame(root1->right, root2->right);
}

int main() {
    struct Node* root1;
    struct Node* root2;

    printf("Build Tree 1:\n");
    root1 = buildTree();

    printf("\nBuild Tree 2:\n");
    root2 = buildTree();

    if (isSame(root1, root2))
        printf("\nGiven trees are same\n");
    else
        printf("\nGiven trees are not same\n");

    return 0;
}
