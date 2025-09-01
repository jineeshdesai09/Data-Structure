#include<stdio.h>

#define n 5
int arr[n];

void insertionSort()
{
	for (int i = 1; i < n; i++)
	{
		int temp = arr[i];
		int j = i-1;
		
		while (j >= 0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
} 

void main()
{
	for (int i = 0; i < n; i++)
	{
		printf("Enter Value into arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nBefore Sorted Array List :");

	for (int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	insertionSort();
	
	printf("\n");
	
	printf("\nAfter Sorted Array List :");
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
}