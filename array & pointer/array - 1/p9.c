//Q9

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
	for(int i=0;i<size;i++){
		if(arr[i]%5==0){
			printf("Frist elements divisible by 5 found at index: %d\n:",i);
			break;
		}
	}
}
