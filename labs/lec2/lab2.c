#include <stdio.h>
/*Write a C code to calculate employee salary in a week based on the his working hours, hour rate is 50.
The program will ask the user to enter the working hours, then it will print his salary. 
But if the working hours are less than 40 hours, a 10% deduction will be applied. */

int main(){
	int  salary,h ;
	printf("enter the working hour=");
	scanf("%d",&h);
	salary=h*50;
	
	if (h<40)
		salary=(90.0/100)*salary;
	
	printf("your salary is %d",salary);
	
	return 0;
}