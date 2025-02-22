// p4


#include<stdio.h>
void main(){
     
     int size;

     printf("Enter the size of an array:\n");
     
     scanf("%d",&size);

     if(size<1){
     
	     printf("invalid size, please re-enter the size of an array:\n");
     
       
	     scanf("%d",&size);

     }
      
     int arr[size];

     printf("Enter the students'id:\n");
	
	for(int i=0;i<size;i++){

     		scanf("%d",&arr[i]);
	}

    	printf("Enter student id to search:\n");


    	int key;
    
	printf("Do you want to search any student id:\n");
    
	scanf("%d",&key);

    
	int flag=0;

    	for(int i=0;i<size;i++){
    
	     	if(arr[i]==key){
         
			printf("student id %d found at index %d \n",key,i);

	 
			flag=1;
    
		}

  
	}

   
	if(flag==0){
     
		printf("%d student id does not exits\n",key);
  
   
	}


}
