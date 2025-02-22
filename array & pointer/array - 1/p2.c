//Q2
#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of an array:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the number:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	 int sum=0;
	 for(int i=0;i<size;i++){
		 if(i%2==0){
			 sum+=arr[i];
		 }
	 }
	 printf("sum of even number: %d\n",sum);
}
