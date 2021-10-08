#include<stdio.h>
/*Write a C code that ask the user to enter 2 values and save them in two variables
then the program sends these variables to function that calculates the summation
and subtraction of them, the function returns the 2 results and return them in two
pointers received as input arguments . The program then print the 2 results.
*/
void func(int a,int b,int *ptr1,int *ptr2);
int main (){
	int num1,num2,sum,sub;
    printf("Enter value 1: ");
	scanf("%d",&num1);
	printf("Enter value 2: ");
    scanf("%d",&num2);
	func(num1,num2,&sum,&sub);
	printf("the result of summation is %d",sum);
	printf("\n the result of subtraction is %d",sub);		
return 0;
}
void func(int a,int b,int *ptr1,int *ptr2){
	*ptr1=a+b;
	*ptr2=a-b;
	
}