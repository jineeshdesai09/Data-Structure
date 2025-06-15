// MatrixMultiplication
#include <stdio.h>

void main(){

    int arr1[3][2], arr2[2][3], arr3[3][3];

    printf("Enter element of 1st: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Enter value for row- %d, col- %d : \n",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("Enter element of 2nd: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Enter value for row- %d, col- %d : \n",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum = 0;
            for(int k =0;k<2;k++){
                sum += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
        }
    }
    printf("\n");
    printf("Multiplication of both array : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d",arr3[i][j]);
        }
        printf("\n");
    }
    
}