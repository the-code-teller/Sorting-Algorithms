#include<stdio.h>
void swap(int* a, int* b){
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}
void sort(int* a, int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(*(a+j) > *(a+j+1)){
				swap(a+j, a+j+1);
			}
		}
	}
}
void main(){
	int i, j, n, a[]={34,23,67,87,43,21,98,54,56,12};
	n = sizeof(a) / sizeof(int);
	sort(a, n);
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

//Time Complexity : O(N2)
//Space Complexity : O(1)
