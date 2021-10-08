/*Write a C program the implement 2 function:
1- Function to get the maximum of 4 values
2- Function to get the minimum of 4 values
The program will ask the user first to enter the 4 values, then print the maximum number and minimum number of them.
*/
#include <stdio.h>
int max(int x,int y,int z,int w);
int min(int l,int m,int n,int p);
int main (){
	int num1,num2,num3,num4,Max,Min;
     printf("Please enter num1 = ");
	 scanf("%d",&num1);
     printf("Please enter num2 = ");	 
	 scanf("%d",&num2);
     printf("Please enter num3 = ");
	 scanf("%d",&num3);
     printf("Please enter num4 = ");
	 scanf("%d",&num4);
	 Max= max(num1,num2,num3,num4); 
	 Min= min(num1,num2,num3,num4);
	 printf("\n The max value is %d",Max);
	 printf("\n The min value is %d",Min);	 
	return 0;	
}
int max(int x,int y,int z,int w)
{ 
    int result;
	if ((x>y)&&(x>z)&&(x>w))
	    result = x ;
    else if ((y>x)&&(y>z)&&(y>w))
	    result = y;
	else if ((z>x)&&(z>y)&&(z>w))
	    result = z;
	else 
	    result = w;
	return result;
}
int min(int l,int m,int n,int p)
{
	int r;
	if ((l<m)&&(l<n)&&(l<p))
	    r = l ;
    else if ((m<l)&&(m<n)&&(m<p))
	    r = m;
	else if ((n<l)&&(n<m)&&(n<p))
	    r = n;
	else 
		r = p;	
	return r ;
}