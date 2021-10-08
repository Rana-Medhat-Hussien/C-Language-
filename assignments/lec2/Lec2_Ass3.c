/*Write a code that will ask the user to enter 3 numbers, the program will print the maximum number of them.*/
#include <stdio.h>
int main (){
	int num1,num2,num3;
	printf("Enter Number 1 = ");
	scanf("%d",&num1);
	printf("Enter Number 2 = ");
	scanf("%d",&num2);
	printf("Enter Number 3 = ");
	scanf("%d",&num3);
	if ((num1>num2)&&(num1>num3))
		printf("maximun number is %d",num1);
	else if ((num2>num1)&&(num2>num3))
		printf("maximun number is %d",num2);	
    else
		printf("maximun number is %d",num3);		
	return 0;	
}