#include<stdio.h>
/*Write a C code defines an int initialized with 10, then print it, then define a pointer
that points to that int and change the value of the int through the pointer to be 20, 
then print it again.Expected Output
*/
int main (){
     int x=10;
	 printf(" x before change is 10");
	 int *ptr=&x;
	 *ptr=20;
	 printf("\n x after change is %d",x);
return 0;
}