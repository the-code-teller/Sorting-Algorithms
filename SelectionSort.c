//Selection Sort

#include<stdio.h>

void swap(int* a, int* b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

void SelectionSort(int* arr, int n)
{
	int i, j, min_index;
	
	for(i=0;i<n-1;i++)
	{
		min_index = i;
		
		for(j=i+1;j<n;j++)
			if(arr[j] < arr[min_index])
				min_index = j;
		
		if(i != min_index)
			swap(&arr[i], &arr[min_index]);
	}	
}

void printArray(int* arr, int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
}

void main()
{
	int arr[] = {12,11,13,5,6}, arr_len;
	arr_len = sizeof(arr) / sizeof(arr[0]);
	printf("Array before Sorting : ");
	printArray(arr, arr_len);
	SelectionSort(arr, arr_len);
	printf("\nSorted Array :		");
	printArray(arr, arr_len);
}
