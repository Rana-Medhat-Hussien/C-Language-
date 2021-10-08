#include <stdio.h>
//Write a C code to print the false value and the true value on GCC. 
int main(){
	int x=5, y=7 , z , w;
	z=x&&y;
	w=x&&0;
	printf("true=%d,false=%d",z,w);
	return 0;	
}