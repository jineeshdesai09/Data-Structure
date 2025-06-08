// DisplayNumber
#include <stdio.h>

int main() {
    int n;

    printf("Enter the numbers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter numbers:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe Numbers is:\n");
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
