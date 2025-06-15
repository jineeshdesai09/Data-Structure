// MatrixAddition
#include <stdio.h>

void main(){

    int arr1[2][2], arr2[2][2], arr3[2][2];
    
    printf("Enter element of 1st: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter value for row- %d, colum- %d : \n",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("Enter element of 2nd: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter value for row- %d, colum- %d : \n",i,j);
            scanf("%d",&arr2[i][j]);
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    printf("\n");
    printf("Addition of both array : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf(" %d",arr3[i][j]);
        }
        printf("\n");
    }
    
}