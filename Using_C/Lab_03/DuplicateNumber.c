//DuplicateNumber
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bool found = false;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("\nDuplicate found: %d at indices %d and %d\n", arr[i], i, j);
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
    {
        printf("No duplicates found.\n");
    }

    return 0;
}
