//Q10

#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	char chArr[size];
	printf("Enter the elements:\n");
	getchar();
	for(int i=0;i<size;i++){
		scanf("%c",&chArr[i]);
		getchar();
	}
	printf("The vowels are: ");
	for(int i=0;i<size;i++){
		if (chArr[i]=='A'||chArr[i]=='E'||chArr[i]=='I'||chArr[i]=='O'||chArr[i]=='U'||chArr[i]=='a'||chArr[i]=='e'||chArr[i]=='i'||chArr[i]=='o'||chArr[i]=='u'){
			printf("%c%d\n",chArr[i],i);
		}
	}
}
