// SumOfNumbers
#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the start number: ");
    scanf("%d", &m);
    printf("Enter the end number: ");
    scanf("%d", &n);

    int size = n - m + 1;
    int arr[size], sum = 0;

    if (n < m)
    {
        printf("End number must be greater than to start number.\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = m + i;
        sum += arr[i];
    }

    printf("Sum of numbers from %d to %d = %d\n", m, n, sum);

    return 0;
}
