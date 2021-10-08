#include<stdio.h>
/*Write a C code that define 2 arrays, and send them to a function that apply scalar multiplication
between the two arrays and return the result, the main function then will print the result.
*/
int  func(int *ptr1,int x,int *ptr2,int y);
int main (){
	
 int i ,size1=0,size2=0; 
	printf("Enter the size of array 1 = ");
	scanf("%d",&size1);
		
	printf("Enter the size of array 2 = ");
	scanf("%d",&size2);
	
 int arr1[size1] , arr2[size2] , result;
		
	
	for(i=0;i<size1;i++){
		printf("arr1[%d]= ",i);
		scanf("%d",&arr1[i]);
	}

	for(i=0;i<size2;i++){
		printf("arr2[%d]= ",i);
		scanf("%d",&arr2[i]);
	}
	
	result=func(&arr1[0],size1,&arr2[0],size2);
	printf("the result = %d", result);
    return 0;
}
     int func(int *ptr1,int x,int *ptr2,int y){
		int sum=0 , i;
		for (i=0;i<x;i++){
		sum=sum+(*(ptr1+i) * *(ptr2+i)); //sum=sum+(ptr1[i}*ptr2[i])
		}
		return sum ;
	}