#include<stdio.h>

void main(){

    int size;

    printf("Enter the size of array:\n");
    scanf("%d",&size);


    if(size<1){

	printf("you have entered invalid size, kindly re-enter the size:\n");
	
        scanf("%d",&size);

    }

    int arr[size];

     printf("Enter the elements\n");

    for(int i =0;i<size;i++){

        scanf("%d",&arr[i]);

    }

    int index;

    printf("Enter the index value up to which you want to print the elements:\n");
    scanf("%d",&index);

    if(index>size){

        printf("Index cannot be greater than size. Re-Enter the index value:\n");
        scanf("%d",&index);
    }

    for(int i=0;i<index;i++){
	
        printf(" %d |", arr[i]);

   }

printf("\n");

}

