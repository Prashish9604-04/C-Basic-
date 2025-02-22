//p1

#include<stdio.h>
void main(){
   
	int size;
 
      	printf("Enter the size of an array:\n");
   
	scanf("%d",&size);
   
   if(size<1){
     
	   printf("invalid size re-enter the size:\n");
   
     
	   scanf("%d",&size);
   }

   int arr[size];
   
   for(int i=0;i<size;i++){
      
	   printf("Enter the elements %d:\n",i);
      
	   scanf("%d",&arr[i]);

   }

   
   printf("The array is:\n");

   
   for(int i=0;i<size;i++){
   
	   printf("%d\n",arr[size-i-1]);
   
   }

}


