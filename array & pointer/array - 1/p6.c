//Q6
#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the elements:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	printf("Sum of all elements of an array:%d\n",sum);
}


				




