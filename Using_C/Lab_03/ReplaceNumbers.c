// ReplaceNumbers
#include <stdio.h>

int main() {
    int n;

    printf("Enter numbers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter numbers:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int num1, num2;

    printf("Enter the number to replace: ");
    scanf("%d", &num1);
    printf("Enter the replacement number: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Both numbers are the same; no replacement needed");
        return 0;
    }

    int found = 0;

    printf("Replacing %d with %d at indices: ", num1, num2);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num1) {
            
            arr[i] = num2;
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Number not found", num1);
    }

    printf("\nFinal array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
