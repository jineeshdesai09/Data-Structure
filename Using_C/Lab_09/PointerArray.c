// PointerArray
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    int *arr =(int *) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
        // scanf("%d", &arr[i]); 
    }

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
        // printf("%d ",arr[i]); 
    }

    free(arr);

    return 0;
}
