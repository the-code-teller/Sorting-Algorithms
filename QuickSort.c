//Insertion Sort

#include<stdio.h>

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = * b;
	*b = temp;
}

int Partition(int arr[], int low, int high)
{
	int i, j=low, pivot = arr[high];
	for(i=low;i<high;i++)
	{
		if(arr[i] <= pivot)
		{
			swap(&arr[i], &arr[j]);
			j++;
		}
	}
	swap(&arr[i], &arr[j]);
	return j;
}

void QuickSort(int* arr, int l, int h)
{	
	if(h<=l)
		return;
	int part_index = Partition(arr, l, h);
	QuickSort(arr, l, part_index-1);
	QuickSort(arr, part_index+1, h);
}

void printArray(int* arr, int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}

void main()
{
	int arr[] = {10, 80, 30, 90, 40, 50, 70}, arr_len;
	arr_len = sizeof(arr) / sizeof(arr[0]);
	printf("Array before Sorting : ");
	printArray(arr, arr_len);
	QuickSort(arr, 0, arr_len-1);
	printf("\nSorted Array :		");
	printArray(arr, arr_len);
}

//Time Complexity : O(NlogN)
//Space Complexity : O(1)
