// p3


#include<stdio.h>
void main(){

   	int size;
   
      	printf("Enter the size of an array;\n");
     
	scanf("%d",&size);

     
	int arr[size];
     
	printf("Enter the number:\n");

     for(int i=0;i<size;i++){
        
	     scanf("%d",&arr[i]);
     }

     printf("Even elements are:\n");
     
     for(int i=0;i<size;i++){
     
	     if(arr[i]%2==0){
	 
		     printf("%d\t",arr[i]);
	 }
     }

     printf("\n");

}
