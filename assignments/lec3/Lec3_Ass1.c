/*Write a C program that ask the user to enter two numbers and print their summation
this program should never ends until the user close the window*/
#include <stdio.h>
int main (){
	int num1,num2,sum;
     for(;;){
		 printf("\nPlease enter first number=");
		 scanf("%d",&num1);
		 printf("Please enter second number=");
		 scanf("%d",&num2);
		 sum=num1+num2;
		 printf("The result is =%d",sum);

	 }
	return 0;	
}