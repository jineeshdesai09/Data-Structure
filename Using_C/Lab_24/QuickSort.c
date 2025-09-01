//B_96
#include <stdio.h>
#include <stdbool.h>

void quickSortHelper(int arr[], int lb, int ub) {
    if (lb < ub) {
        int i = lb;
        int j = ub + 1;
        int key = arr[lb];
        bool flag = true;

        while (flag) {
            do {
                i++;
            } while (i <= ub && arr[i] < key);

            do {
                j--;
            } while (arr[j] > key);

            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } else {
                flag = false;
            }
        }

        int temp = arr[lb];
        arr[lb] = arr[j];
        arr[j] = temp;

        quickSortHelper(arr, lb, j - 1);
        quickSortHelper(arr, j + 1, ub);
    }
}

void quickSort(int arr[], int size) {
    quickSortHelper(arr, 0, size - 1);
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    quickSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
