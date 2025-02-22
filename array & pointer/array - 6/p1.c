#include<stdio.h>

int main(){

	int x;

	printf("Enter the number of elements : ");
	scanf("%d",&x);

	int arr[x];

	printf("Enter the elements seperated by space :");
	
	for(int i=0;i<x;i++){
	
		scanf("%d",&arr[i]);

	}

	printf("Elements with same index and values are : ");

	for(int i=0;i<x;i++){
	
		if(arr[i] == i){
		
			printf("%d",arr[i]);
		}

		printf("\n");

	}
}
