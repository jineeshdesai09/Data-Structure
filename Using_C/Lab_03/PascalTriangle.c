// PascalTriangle
#include <stdio.h>

void main(){

    int n;
    int i, j;

    printf("Enter height of triangle :");
    scanf("%d",&n);

    int arr[n][n];
    
    for(int i=0;i<n;i++){
        for(j=0;j<=n-i-1;j++){
            printf("  ");
        }
        for(j=0;j<=i;j++){
            if(j==0 || j == i){
                arr[i][j] = 1;
            }
            else {
                arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
            }
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}