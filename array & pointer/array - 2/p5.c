// p5



#include<stdio.h>
void main(){

     int size;
     
     printf("Enter the size of an array:\n");
     
     scanf("%d",&size);

     if(size){
     
     
	     printf("invalid size re-enter it :\n");
       
	     scanf("%d",&size);
     
     }

     int ageArr[size];
     
     printf("Enter the child age:\n");
     
     for(int i=0;i<size;i++){
     
	     scanf("%d",&ageArr[i]);
     
	     if(ageArr[i]>5){
	     
		     printf("age should not be greater than 5, kindly re-enter the age\n");

		     scanf("%d",&ageArr[i]);

      
				     }


  
     }
       
     
     printf("Your age has be confrom by us\n");
     
     for(int i=0;i<size;i++){
     
     printf("%d\n",ageArr[i]);
     
     }


}
