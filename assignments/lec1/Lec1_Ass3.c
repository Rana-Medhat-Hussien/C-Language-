//Write a code that takes 2 numbers and print their summation, subtraction, anding, oring, and Xoring
#include <stdio.h>
int main (){
int num1 , num2 , x , y , z , w , l  ;
printf("enter the number a=");
scanf("%d",&num1);
printf("enter the number b=");
scanf("%d",&num2);
x=num1+num2;
y=num1-num2;
z=num1&num2;
w=num1|num2;
l=num1^num2;
printf(" a+b=%d",x);
printf("\n a-b=%d",y);
printf("\n a&b=%d",z);
printf("\n a|b=%d",w);
printf("\n a^b=%d",l);
	return 0;
	
}