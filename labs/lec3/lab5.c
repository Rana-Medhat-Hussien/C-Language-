#include <stdio.h>
/*Write a program in C to display the multiplication table of a given integer.*/
int main()
{
	int num,i,result;
	printf("Enter the number to display its multiplication table = ");
	scanf("%d",&num);
	while(i!=(num+1)){ // (i<=num)
		result =num*i;
		printf("%d*%d =%d \n", num,i,result);
		i++;
	}
  return 0;
}