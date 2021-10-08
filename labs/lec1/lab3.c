#include <stdio.h>
//Write a C code that will ask the user to enter two values and print their summation and multiplication. 
int main ()
{
	int x,y,num1,num2;
	printf ("Please enter number1=");
	scanf("%d", &num1 );
	printf ("\nPlease enter number2=");
	scanf("%d", &num2);
	x=num1+num2;
	y=num1*num2;
	printf("\n a+b=%d",x);
	printf("\n a*b=%d",y);
	return 0;	
}