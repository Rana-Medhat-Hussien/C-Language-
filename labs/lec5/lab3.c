#include<stdio.h>
//bubble sort
int main (){
	int arr[10],outI,inner,temp,i, flag=0,k;
	for (i=0;i<10;i++){
		printf("Please enter the number %d=",i);
		scanf("%d",&arr[i]);
	}
	//outer interation 
	for ( outI=0;outI<=8;outI++) //<(size-1)
	{
		for(inner=0;inner<=8-outI;inner++) // <(size-1-interation)
		{
			if (arr[inner]<arr[inner+1]){
			temp=arr[inner];
			arr[inner]=arr[inner+1];
			arr[inner+1]=temp;
			flag=1;
			}
		}
		if (flag==0)
		{
			break;
		}
		
	}
	for (k=0;k<10;k++)
	{
		printf("\n %d",arr[k]);
	}
return 0;
}