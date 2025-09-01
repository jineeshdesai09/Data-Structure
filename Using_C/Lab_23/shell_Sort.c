#include <stdio.h>

#define n 8
int arr[n];

void shellSort()
{
	for (int gap = n / 2; gap >= 1; gap = gap / 2)
	{
		for (int j = gap; j < n; j++)
		{
			for (int i = j - gap; i >= 0; i = i - gap)
			{
				if (arr[i + gap] > arr[i])
				{
					break;
				}
				else
				{
					int temp = arr[i + gap];
					arr[i + gap] = arr[i];
					arr[i] = temp;
				}
			}
		}
	}
}

void main()
{
	for (int i = 0; i < n; i++)
	{
		printf("Enter Value into arr[%d]:", i);
		scanf("%d", &arr[i]);
	}

	printf("\nBefore Sorted Array List :");

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	shellSort();

	printf("\n");

	printf("\nAfter Sorted Array List :");

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}