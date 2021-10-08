#include <stdio.h>
/*Write C code that will ask the user to enter 2 numbers, then the main function will call a
function named Get_Max that takes the 2 values entered by the user then return the maximum of them.
The main function then will print the returned value
*/
 int Get_Max (int x, int y);
int main (){
	int num1,num2,max;
	printf("please Enter value 1:");
	scanf("%d",&num1);
	printf("please Enter value 2:");
	scanf("%d",&num2);	
	max=Get_Max (num1,num2);
	printf("The maximum value is %d",max);
	return 0;	
}
 int Get_Max (int x, int y){
	 if (x>y)
		 return (x);
	 else
		 return (y);
 }