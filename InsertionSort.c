//Insertion Sort

#include<stdio.h>

void InsertionSort(int* arr, int n)
{
	int i, j, num;
	
	for(i=1;i<n;i++)
	{
		j = i-1;
		num = arr[i];
		
		while(j>=0 && arr[j] > num)
		{
			arr[j+1] = arr[j];
			j--;
		}
		
		arr[j+1] = num;
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
	InsertionSort(arr, arr_len);
	printf("\nSorted Array :		");
	printArray(arr, arr_len);
}

//Time Complexity : O(N2)
//Space Complexity : O(1)
