#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create a new node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Find the index of a value in an array between start and end
int findIndex(int arr[], int start, int end, int value) {
    for (int i = start; i <= end; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1; // Not found
}

// Recursive function to construct tree
struct Node* buildTree(int preorder[], int postorder[], int* preIndex, int postStart, int postEnd, int size) {
    if (*preIndex >= size || postStart > postEnd)
        return NULL;

    // Create the current root node
    struct Node* root = createNode(preorder[*preIndex]);
    (*preIndex)++;

    // If this node has no children
    if (postStart == postEnd || *preIndex >= size)
        return root;

    // Find index of next preorder element in postorder
    int idx = findIndex(postorder, postStart, postEnd, preorder[*preIndex]);

    // Build left and right subtrees
    if (idx != -1 && idx <= postEnd) {
        root->left = buildTree(preorder, postorder, preIndex, postStart, idx, size);
        root->right = buildTree(preorder, postorder, preIndex, idx + 1, postEnd - 1, size);
    }

    return root;
}

// Print inorder traversal of the tree
void inorderTraversal(struct Node* root) {
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

int main() {
    int preorder[100], postorder[100], size;

    // Input size and traversals
    printf("Enter number of nodes: ");
    scanf("%d", &size);

    printf("Enter preorder traversal:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &preorder[i]);
    }

    printf("Enter postorder traversal:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &postorder[i]);
    }

    int preIndex = 0;

    // Construct the tree
    struct Node* root = buildTree(preorder, postorder, &preIndex, 0, size - 1, size);

    // Print inorder traversal of the tree
    printf("Inorder traversal of the constructed tree:\n");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
