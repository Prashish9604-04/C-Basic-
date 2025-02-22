// p2


#include<stdio.h>
void main(){
     
	int size;
     printf("Enter the size of array:\n");
     scanf("%d",&size);
     
     if(size<1){
     
	     printf("invalid size , re-enter the size of an array");
     
	     scanf("%d",&size);
     
     }
     char arr[size];
     
     printf("Enter the character\n");
     
     getchar();
     
     for(int i=0;i<size;i++){
     
	     scanf("%c",&arr[i]);
     
	     getchar();
     }

     printf("The ASCll values is\n");
     
     for(int i=0;i<size;i++){
     
	     printf("%d\n",arr[i]);
     }
}

