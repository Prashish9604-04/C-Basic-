#include<stdio.h>

void main(){

    int size;

    printf("Enter the size of array:\n");

    scanf("%d",&size);

    if(size<1){

        printf("you have entered invalid size, kindly re-enter the size:\n");
        scanf("%d",&size);
    }

    char arr[size];

    printf("Enter the elements\n");

    getchar();

    for(int i =0;i<size;i++){

	scanf("%c",&arr[i]);

        getchar();

    }

    printf("printing alternate elements\n");

    for(int i=0;i<size;i+=2){

        printf(" %c |",arr[i]);

    }

    printf("\n");

}

