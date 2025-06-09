// DeleteNumberInSorted
#include <stdio.h>

int main() {
    int arr[100], n, value, pos = -1;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter %d numbers in ascending order:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to delete: ");
    scanf("%d", &value);

    for(int i = 0; i < n; i++) {
        if(arr[i] == value) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        printf("Value not found in the array.\n");
        return 1;
    }

    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
