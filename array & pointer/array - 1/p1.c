//1st Question 
#include<stdio.h>
void main(){
     int size;
     printf("Enter the size of Array:");
     scanf("%d",&size);
     
     int arr[size];
     printf("Enter the No:\n");
     
     for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

}
 printf("The even no is :");
   for(int i=0;i<size;i++){
       if(i%2==0){
          printf("%d\t",arr[i]);
       }
   }
   printf("\n");
}
