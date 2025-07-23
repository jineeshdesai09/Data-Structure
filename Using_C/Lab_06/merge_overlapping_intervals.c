#include <stdio.h>

struct Interval {
    int start;
    int end;
};

void sortIntervals(struct Interval arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].start > arr[j + 1].start) {
                struct Interval temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void mergeIntervals(struct Interval arr[], int n) {
    sortIntervals(arr, n);

    struct Interval result[100];
    int index = 0;

    result[0] = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i].start <= result[index].end) {
            if (arr[i].end > result[index].end) {
                result[index].end = arr[i].end;
            }
        } else {
            index++;
            result[index] = arr[i];
        }
    }

    printf("Merged Intervals:\n");
    for (int i = 0; i <= index; i++) {
        printf("{%d, %d}\n", result[i].start, result[i].end);
    }
}

int main() {
    int n;
    struct Interval arr[100];

    printf("Enter number of intervals: ");
    scanf("%d", &n);

    printf("Enter intervals (start end):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].start, &arr[i].end);
    }

    mergeIntervals(arr, n);

    return 0;
}
