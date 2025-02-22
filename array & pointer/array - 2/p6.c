//Q6



#include<stdio.h>
void main(){

     int size;
     
     printf("Enter the size of array:\n");
     
     scanf("%d",&size);
     
     if(size<1){
     
	     printf("You have entered invalid size , kindly please re-entered the size:\n");
	     
	     scanf("%d",&size);
     
     }

     float arr[size];
	     
	     printf("Enter the height :\n");

     for(int i=0;i<size;i++){
     
         scanf("%f",&arr[i]);

     if(arr[i]>6||arr[i]<5.5){
     
	     printf("height shall not be greater than 6ft and less than 5.5ft\n . Re-enter the height \n");
	     
	     scanf("%f",&arr[i]);
     
       }
     
     }
     
     printf("The height is \n");

     printf("Printing valid age:\n");
     
     for(int i=0;i<size;i++){
     
	     if(arr[i]>=5.5||arr[i]<=6.0){
     
	     printf("%f\n",arr[i]);
     
    
	     }
     
     }
     

}
