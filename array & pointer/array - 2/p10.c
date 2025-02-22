#include<stdio.h>

void main(){

    int size;

    printf("Enter the size of array:\n");

    scanf("%d",&size);

    if(size<1){

        printf("you have entered invalid size, kindly re-enter the size:\n");

        scanf("%d",&size);
    }

    int arr[size];


    printf("Enter the elements\n");

    for(int i =0;i<size;i++){

        scanf("%d",&arr[i]);

    }

    for(int i=0;i<size;i+=2){

        printf(" %d |",arr[size-i-1]);

    }

}

