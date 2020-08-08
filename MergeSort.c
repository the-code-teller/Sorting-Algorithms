//Insertion Sort

#include<stdio.h>

void Merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	
	int n1 = m-l+1;
	int n2 = r-m;
	
	int L[n1], R[n2];
	
	for(i=0;i<n1;i++)
		L[i] = arr[l+i];
	for(i=0;i<n1;i++)
		R[i] = arr[m+1+i];
		
	i=0; j=0; k=l;	
	while(i<n1 && j<n2)
	{
		if(L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while(i < n1)
	{
		arr[k] = L[i];
		i++; k++;
	}
	while(j < n2)
	{
		arr[k] = R[j];
		j++; k++;
	}
}

void MergeSort(int* arr, int l, int r)
{	
	if(r<=l)
		return;
	int m = l + (r-l) / 2;
	MergeSort(arr, l, m);
	MergeSort(arr, m+1, r);
	Merge(arr, l, m, r);
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
	printf("\n");
	MergeSort(arr, 0, arr_len-1);
	printf("\nSorted Array :		");
	printArray(arr, arr_len);
}

//Time Complexity : O(NlogN)
//Space Complexity : O(N)
