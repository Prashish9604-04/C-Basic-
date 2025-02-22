#include<stdio.h>

int main(){

	int x;

	printf("Enter the number of elements : ");
	scanf("%d",&x);

	int arr[x];

	printf("Enter the elemenra of the array : ");

	for(int i=0;i<x;i++){
        
		scanf("%d",&arr[i]);

	}

	int sum;

	printf("Enter sum : ");
	scanf("%d",&sum);

	for (int i=0;i<x;i++){
	
		for(int j=i+1;j<x;j++){
		
			if (arr[i]+arr[j] == sum){
			
				printf("First pair found: (%d,%d)\n",arr[i],arr[j]);

			}
		}
	}

	printf("No such pair is found above\n");


}
