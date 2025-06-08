// AvgOfNumbers
#include <stdio.h>

int main() {

    int n;
    float sum = 0, average;

    printf("Enter the number ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;    // Natural numbers start from 1
        sum += arr[i];
    }

    average = sum / n;

    printf("Average of first %d numbers is: %.2f\n", n, average);

    return 0;
}
