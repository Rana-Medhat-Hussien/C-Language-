/*Write a C code that ask the user to enter 10 numbers, then ask him to enter another number to search on it in the 10 numbers and print its location in case it is found.
In case the number is not found, it will print number no exist*/
#include <stdio.h>
int main (){
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11;
	printf("Enter Number 1 = ");
	scanf("%d",&num1);
	printf("Enter Number 2 = ");
	scanf("%d",&num2);
	printf("Enter Number 3 = ");
	scanf("%d",&num3);
	printf("Enter Number 4 = ");
	scanf("%d",&num4);
	printf("Enter Number 5 = ");
	scanf("%d",&num5);
	printf("Enter Number 6 = ");
	scanf("%d",&num6);
	printf("Enter Number 7 = ");
	scanf("%d",&num7);
	printf("Enter Number 8 = ");
	scanf("%d",&num8);
	printf("Enter Number 9 = ");
	scanf("%d",&num9);
	printf("Enter Number 10 = ");
	scanf("%d",&num10);
	printf("Enter the value to search : ");
	scanf("%d",&num11);
	if (num11==num1)
		printf("value is exist at element number 1");
	else if (num11==num2)
		printf("value is exist at element number 2");
	else if(num11==num3)
		printf("value is exist at element number 3");
	else if(num11==num4)
		printf("value is exist at element number 4");
	else if(num11==num5)
		printf("value is exist at element number 5");
	else if(num11==num6)
		printf("value is exist at element number 6");
	else if(num11==num7)
		printf("value is exist at element number 7");
	else if(num11==num8)
		printf("value is exist at element number 8");
	else if(num11==num9)
		printf("value is exist at element number 9");
	else if(num11==num10)
		printf("value is exist at element number 10");
	else
		printf("number no exist");
	return 0;	
}