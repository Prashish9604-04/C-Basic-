//Q5
#include<stdio.h>
void main(){
	int size ;
	printf("Enter the size of array:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the elemenets:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int prod=1;
	for(int i=0;i<size;i++){
		if(arr[i]%2==1){
			prod*=arr[i];
		}
	}
	printf("Product of odd elements:%d\n",prod);
}



				


