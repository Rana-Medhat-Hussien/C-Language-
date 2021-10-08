/*Write a C code that defines a function which takes an array as input argument and apply the bubble sorting algorithm on it, then print the result*/
#include<stdio.h>
int main (){
    int size=0,arr[size],i,j,temp;
	 printf("Enter array of size= ");
	 scanf("%d",&size);
	 for(i=0;i<size;i++){
		printf("\n Enter the number %d of array=",i);
		scanf("%d",&arr[i]);
	 }
    for (i=0;i<size-1;i++){
		for (j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d,",arr[i]);
	}
return 0;
}
