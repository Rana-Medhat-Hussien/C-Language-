#include<stdio.h>
/*Write a C code that ask the user to enter 2 values and save them in two variables,
 then the program sends these variables by address to a function that returns the summation
 of them. The program then prints the result.
*/

int func (int *ptr1,int *ptr2);
int main (){
	int num1,num2,sum;
	printf("Enter value 1: ");
	scanf("%d",&num1);
	printf("Enter value 2: ");
    scanf("%d",&num2);
	sum=func(&num1,&num2);
	printf("the result =%d",sum);
	
return 0;
}
int func (int *ptr1,int *ptr2 )
{
	int a;
	a=(*ptr1)+(*ptr2);
	return a;
}