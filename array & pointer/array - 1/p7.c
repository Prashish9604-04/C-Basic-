//Q7

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

	int evenindexedsum=0;
	int oddindexedsum=0;
	for(int i=0;i<size;i++){
		if(i%2==0){
			evenindexedsum+=arr[i];
		}else{
			oddindexedsum+=arr[i];
		}
	}
	printf("Diffrence of sum of even indexed elements and odd indexed elements is:%d\n",(evenindexedsum-oddindexedsum));
}



