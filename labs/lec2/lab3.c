#include <stdio.h>
/*Write a C code that ask the user to enter a number and check if it is Even or Odd number */
int main (){
	int num;
	printf("Enter the number=");
	scanf("%d",&num);
	if (num%2==0){
		printf("The number %d is even", num);
	}
	else{
		printf("The number %d is odd", num);
	}
	return 0;
	
}