#include<stdio.h>
//Write a C code that calculates the summation of an array using a pointer on its first element.
int main (){
     int size , arr[size] ,sum=0 ,i;
	 int *ptr=&arr[0];
	 
	 printf("Enter the size of the array= ");
	 scanf("%d",&size);
	 
     for (i=0;i<size;i++){
		 printf("arr[%d]=",i);
		 scanf("%d",&arr[i]);
	 }

	 for (i=0;i<size;i++){
		 sum=sum+*(ptr+i); //sum=sum+*ptr; ptr++; //sum=sum+ptr[i]
	 }
	 
	 printf("The sum of the array = %d",sum);
return 0;
}