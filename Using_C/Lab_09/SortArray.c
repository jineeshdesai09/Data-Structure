// SortArray
#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j * sizeof(int)) > *(arr + (j + 1)* sizeof(int))) {
                int temp = *(arr + j*sizeof(int));
                *(arr + j*sizeof(int)) = *(arr + (j + 1)* sizeof(int));
                *(arr + (j + 1) * sizeof(int)) = temp; 
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i * sizeof(int));
    }

    sort(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i * sizeof(int))); 
    }

    free(arr);

    return 0;
}
