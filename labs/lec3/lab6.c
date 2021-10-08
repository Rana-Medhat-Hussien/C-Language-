#include <stdio.h>
/*Write a program in C to calculate the factorial of an integer entered by the user using while loop*/

int main()
{
	int num , fact=1 , i=1; // result=1;
   printf("Enter the integer= ");
   scanf("%d",&num);
   do{
	   fact=fact*i; //result=result*num; //fact=fact*i;
	   i++;         //num--; // i++;
	   num--;
   }
   while(num!=0); // (num>0) // (i<num)
	   printf("factorial=%d",fact);
  return 0;
}