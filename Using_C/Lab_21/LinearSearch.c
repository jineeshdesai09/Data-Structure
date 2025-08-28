//A_89
#include <stdio.h>

int linearsearch(int arr[], int size, int val) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == val)
            return i;
    }
    return -1;
}

int main() {
    int n, val, index;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &val);

    index = linearsearch(arr, n, val);

    if (index != -1)
        printf("Element %d found at index %d.\n", val, index);
    else
        printf("Element %d not found in the array.\n", val);

    return 0;
}