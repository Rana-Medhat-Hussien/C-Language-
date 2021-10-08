/*Write a C code that ask the user to enter 10 values and save them in an array using a for loop. Then print the minimum and the maximum of the values.*/
#include<stdio.h>
int main (){ 
int i,arr[10],min,max;
	for (i=0;i<10;i++){
		printf("Please enter number %d=",i);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];	
	
//compare if arr[0] is the max if not it will but bigger into max	
	for(i=0;i<10;i++){
	    if (max<arr[i]){ //find max 
			    max=arr[i];
			}
		 if (min>arr[i]){ //find min
			    min=arr[i];
	         }
	}		 
    printf("The max is %d\n",max);
	printf("The min is %d",min);		
	

return 0;
}