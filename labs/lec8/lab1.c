#include<stdio.h>
/*Write a c code that defines a structure for employees that contains his salary, bonus and deductions. 
The program shall ask the user to enter these information for three employees ( Ahmed, Waleed and Amr).
 Then the program will print the total value shall be supplied by finance team.*/
struct employee{
	int salary;
	int bonus;
	int deduction;
};
int main (){
	int totalSalary,totalBonus,totalDeduction,total;
	struct employee Ahmed ;
	struct employee waleed ;
	struct employee amr ; 
	
	printf("Please enter the ahmed salary= ");
	scanf("%d",&Ahmed.salary);
	printf("Please enter the ahmed bonus= ");
	scanf("%d",&Ahmed.bonus);
	printf("Please enter the ahmed deduction= ");
	scanf("%d",&Ahmed.deduction);
	
	printf("Please enter the waleed salary= ");
	scanf("%d",&waleed.salary);
	printf("Please enter the waleed bonus= ");
	scanf("%d",&waleed.bonus);
	printf("Please enter the waleed deduction= ");
	scanf("%d",&waleed.deduction);
	
	printf("Please enter the amr salary= ");
	scanf("%d",&amr.salary);
	printf("Please enter the amr bonus= ");
	scanf("%d",&amr.bonus);
	printf("Please enter the amr deduction= ");
	scanf("%d",&amr.deduction);
	
	totalSalary=(Ahmed.salary+waleed.salary+amr.salary);
    totalBonus=(Ahmed.bonus+waleed.bonus+amr.bonus);
	totalDeduction=(Ahmed.deduction+waleed.deduction+amr.deduction);
	
	total=totalSalary+totalBonus-totalDeduction;
	
	printf("Total value needed=%d",total);
	
	
	

}