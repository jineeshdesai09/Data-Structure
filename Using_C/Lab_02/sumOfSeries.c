//sumOfSeries
#include <stdio.h>

int sumOfSeries(int);

int main() {
    int n;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        sum += i;
    }
    printf("Sum of series for %d is: %d", n, sum);
    // printf("Sum of series for %d iterations: %d\n", n, sumOfSeries(n));

    return 0;
}

int sumOfSeries(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n * (n + 1) / 2;
        n--;
    }
    return sum;
}
