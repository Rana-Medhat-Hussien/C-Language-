#include <stdio.h>
/*Write C code that ask will ask  the user to enter the result of 3 x 4, In case the user entered correct answer the program will print Thanks, 
otherwise the program will print try again until the user enters the correct answer */
int main()
{
	int result ;
	printf("Enter the answer of 3*4 =");
	scanf("%d",&result);
	while (result!=12){
	  printf("Not correct , please try again ");
	  scanf("%d",&result);		
	}
	printf("Thank you");
  return 0;
}