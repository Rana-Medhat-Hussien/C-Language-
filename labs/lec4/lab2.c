#include <stdio.h>
/*Write C code implement a function to swap 2 global variables.*/
int x,y;
void swap(void);
int main (){
	printf("x before swap = ");
	scanf("%d",&x);
	printf("y before swap = ");
	scanf("%d",&y);
	swap();
	printf("x after swap = %d",x);
	printf("\ny before swap = %d ",y);		 	
	return 0;	
}
 void swap(void)
 {
	 int temp;
	 temp=x;
	 x=y;
	 y=temp;

 }