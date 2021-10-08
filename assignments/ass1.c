#include<stdio.h>
int main (){ 
int i,j,arr[10];
	for (i=0;i<10;i++){
		printf("Please enter number %d=",i);
		scanf("%d",&arr[i]);
	}
	
	//find max number
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if (arr[i]>arr[j]){
				printf("The max is %d",arr[i]);
				break;
			}
		}
	}

	
	//find min number
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if (arr[i]<arr[j]){
			    printf("The min is %d",arr[i]);	
				break;
			}
		}
	}

return 0;
}
