// PositionOfNumber
#include <stdio.h>

int main() {
    int n;

    printf("Enter the numbers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];
    int maxPos = 0, minPos = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxPos = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minPos = i;
        }
    }

    printf("Largest number is %d at index %d\n", max, maxPos );
    printf("Smallest number is %d at index %d\n", min, minPos );

    return 0;
}
