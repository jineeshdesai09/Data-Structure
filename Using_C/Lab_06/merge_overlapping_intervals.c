// #include <stdio.h>

// struct Interval {
//     int start;
//     int end;
// };

// void sortIntervals(struct Interval arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j].start > arr[j + 1].start) {
//                 struct Interval temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void mergeIntervals(struct Interval arr[], int n) {
//     sortIntervals(arr, n);

//     struct Interval result[100];
//     int index = 0;

//     result[0] = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i].start <= result[index].end) {
//             if (arr[i].end > result[index].end) {
//                 result[index].end = arr[i].end;
//             }
//         } else {
//             index++;
//             result[index] = arr[i];
//         }
//     }

//     printf("Merged Intervals:\n");
//     for (int i = 0; i <= index; i++) {
//         printf("{%d, %d}\n", result[i].start, result[i].end);
//     }
// }

// int main() {
//     int n;
//     struct Interval arr[100];

//     printf("Enter number of intervals: ");
//     scanf("%d", &n);

//     printf("Enter intervals (start end):\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d %d", &arr[i].start, &arr[i].end);
//     }

//     mergeIntervals(arr, n);

//     return 0;
// }

// Using Stack
#include <stdio.h>
#define max 100
struct interval
{
    int start;
    int end;
};

struct interval Stack[max];
int top = -1;

void push(struct interval val)
{
    if (top > max - 1)
    {
        return;
    }
    Stack[++top] = val;
}

struct interval pop()
{
    struct interval empty = {-1, -1};
    if (top == -1)
    {
        return empty;
    }
    return Stack[top--];
}

void sortInterval(struct interval arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i- 1; j++)
        {
            if (arr[j].start > arr[j + 1].start)
            {
                struct interval temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void mergeInterval(struct interval arr[], int n)
{
    sortInterval(arr, n);

    push(arr[0]);

    for (int i = 1; i < n; i++)
    {
        struct interval topInterval = Stack[top];
        if (arr[i].start <= topInterval.end)
        {
            if (arr[i].end > topInterval.end)
            {
                topInterval.end = arr[i].end;
            }
            pop();
            push(topInterval);
        }
        else
        {
            push(arr[i]);
        }
        
    }

    //print
    printf("Merged Inteval:\n");
    for (int i = 0; i <= top ; i++)
    {
        printf("{%d %d}\n", Stack[i].start, Stack[i].end);
    }
    
}

int main(){
    int n;
    struct interval arr[max];

    printf("Number of Intevals\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].start, &arr[i].end);
    }

    mergeInterval(arr,n);
    return 0;
    
}
