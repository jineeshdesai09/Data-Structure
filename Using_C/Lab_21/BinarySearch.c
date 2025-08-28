// // A_90
#include <stdio.h>

int binarysearch(int arr[], int size, int val) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == val)
            return mid;
        else if (arr[mid] < val)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, val, index;

    printf("Enter the number of elements(can give wrong answers for unsorted array): ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &val);

    index = binarysearch(arr, n, val);

    if (index != -1)
        printf("Element %d found at index %d.\n", val, index);
    else
        printf("Element %d not found in the array.\n", val);

    return 0;
}


// Recursive binary search function
// int binarySearchRecursive(int arr[], int low, int high, int val) {
//     if (low > high)
//         return -1; 

//     int mid = (low + high) / 2;

//     if (arr[mid] == val)
//         return mid;
//     else if (arr[mid] < val)
//         return binarySearchRecursive(arr, mid + 1, high, val);
//     else
//         return binarySearchRecursive(arr, low, mid - 1, val);
// }