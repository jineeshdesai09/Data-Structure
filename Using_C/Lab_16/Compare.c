#include <stdio.h>
#include <stdlib.h>

struct treenode {
    int info;
    struct treenode* lptr;
    struct treenode* rptr;
};

struct treenode* insert(struct treenode* root, int val){
    if( root == NULL ){
        root = (struct treenode*)malloc(sizeof(struct treenode));
        root->lptr = NULL;
        root->rptr = NULL;
        root->info = val;
        return root;
    }
    if(root->info > val){
        root->lptr = insert(root->lptr, val);
    }
    else if(root->info < val){
        root->rptr = insert(root->rptr, val);
    }
    return root;
}

int sameTree(struct treenode* root1,struct treenode* root2){
    if(root1==NULL && root2 == NULL) return 1;
    
    if(root1 == NULL || root2 ==NULL) return 0;
    
    if(root1->info != root2->info) return 0;

    return (sameTree(root1->lptr, root2->lptr) && sameTree(root1->rptr, root2->rptr));
}

void main(){
    struct treenode *root1 = NULL;
    struct treenode *root2 = NULL;
    int opr = 0;
    do {
        printf("Enter element for tree1 (non-positive to end) : \n");
        scanf("%d",&opr);
        if(opr > 0)
            root1 = insert(root1,opr);
    } while(opr>0);
    opr = 0;
    do {
        printf("Enter element for tree2 (non-positive to end) : \n");
        scanf("%d",&opr);
        if(opr > 0)
            root2 = insert(root2,opr);
    } while(opr>0);
    
    if(sameTree(root1,root2)){
        printf("\nGiven trees are same");
    }
    else {
        printf("\nGiven trees are not same");
    }
}
