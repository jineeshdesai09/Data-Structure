// MergeTwoArrays
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter number of elements in 1st array: ");
    scanf("%d", &n1);
    int a[n1];

    printf("Enter %d elements:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in 2nd array: ");
    scanf("%d", &n2);
    int b[n2];

    printf("Enter %d elements:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int merged[n1 + n2];

    for (int i = 0; i < n1; i++) {
        merged[i] = a[i];
    }

    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = b[i];
    }

    printf("Merged array is:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
