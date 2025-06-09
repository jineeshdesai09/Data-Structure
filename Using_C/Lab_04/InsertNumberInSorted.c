// InsertNumberInSorted
#include <stdio.h>

int main() {
    int arr[100], n, value, pos;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter %d numbers in ascending order:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    for(pos = 0; pos < n; pos++) {
        if(arr[pos] > value) {
            break;
        }
    }

    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
