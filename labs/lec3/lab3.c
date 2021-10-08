#include <stdio.h>
//Write a program in C to read 10 numbers from the user and find their summation and average 
int main()
{
	int sum=0 , i  , num; 
	float average;
	printf("Enter the 10 numbers\n");
for (i=0;i<10;i++){
	printf("Number %d:",i);
	scanf("%d",&num);
	sum=sum+num;
}
average=sum/(10.0); // or average =(float)sum/10;
printf("The sum of 10no is %d",sum);
printf("\nThe Average is %f",average);
  return 0;
}