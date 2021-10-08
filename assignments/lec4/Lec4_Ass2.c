/*Write a C program to act as simple calculator, first it will ask the user to enter the operation ID, depending on the operation, the program will ask the user either to
enter 1 operand or 2 operands and the program will execute the operation and print the result. Each operation should be implemented in a stand a long function.*/
#include <stdio.h>
float add ( float x , float y );
float sub ( float x , float y );
float mult( float x , float y );
float div ( float x , float y );
int   and ( int   m , int   n );
int   or  ( int   m , int   n );
int   not ( int m  );
int   xor ( int   m , int   n );
int reminder ( int m , int n );
float increment ( float x  );
float decrement ( float x  );

int main (){

   int id ;
   float num1 , num2 , result , num ;
   int num3,num4,r;
   printf("Enter the operation ID from 1 to 11 = ");
   scanf("%d",&id);

   if (id==1){
	   printf("Enter num1= ");
	   scanf("%f",&num1);
	   printf("Enter num2= ");
	   scanf("%f",&num2);
	   result  = add ( num1 , num2 );
	   printf("The result of add is = %f", result);
   }
   else if (id==2)
   {
	   printf("Enter num1= ");
	   scanf("%f",&num1);
	   printf("Enter num2= ");
	   scanf("%f",&num2);
	   result  = sub ( num1 , num2 );
	   printf("The result of sub is = %f", result);
   }
   else if (id==3)
   {
	   printf("Enter num1= ");
	   scanf("%f",&num1);
	   printf("Enter num2= ");
	   scanf("%f",&num2);
	   result  = mult ( num1 , num2 );
	   printf("The result of mult is = %f", result);
   }
    else if (id==4)
   {
	   printf("Enter num1= ");
	   scanf("%f",&num1);
	   printf("Enter num2= ");
	   scanf("%f",&num2);
	   result  = div ( num1 , num2 );
	   printf("The result of div is = %f", result);
   }
    else if (id==5)
   {
	   printf("Enter num1= ");
	   scanf("%d",&num3);
	   printf("Enter num2= ");
	   scanf("%d",&num4);
	   r  = and ( num3 , num4 );
	   printf("The result of and is = %d", r);
   }
   else if (id==6)
   {
	   printf("Enter num1= ");
	   scanf("%d",&num3);
	   printf("Enter num2= ");
	   scanf("%d",&num4);
	   r  = or ( num3 , num4 );
	   printf("The result of or is = %d", r);
   }
   else if (id==7)
   {
	   printf("Enter num= ");
	   scanf("%d",&num);
	   r  =  not ( num );
	   printf("The result of not is = %d", r);
   }
    else if (id==8)
   {
	   printf("Enter num1= ");
	   scanf("%d",&num3);
	   printf("Enter num2= ");
	   scanf("%d",&num4);
	   r  = xor ( num3 , num4 );
	   printf("The result of xor is = %d", r);
   }
      else if (id==9)
   {
	   printf("Enter num1= ");
	   scanf("%d",&num3);
	   printf("Enter num2= ");
	   scanf("%d",&num4);
	   r  = reminder ( num3 , num4 );
	   printf("The result of reminder is = %d", r);
   }
   else if (id==10)
   {
	   printf("Enter num ");
	   scanf("%f",&num);
	   result  = increment ( num );
	   printf("The result of increment is = %f", result);
   }
   else
   {
	   printf("Enter num ");
	   scanf("%f",&num);
	   result  = decrement ( num );
	   printf("The result of decrement is = %f", result);
   }

	return 0;
}

float add ( float x , float y )
{
	return (x + y) ;
}

float sub ( float x , float y )
{
	return (x - y) ;
}

float mult ( float x , float y )
{
	return (x * y) ;
}

float div ( float x , float y )
{
	return (x / y);
}

int and ( int m , int n )
{
	return (m & n) ;
}

int or  ( int m , int n )
{
	return (m | n) ;
}

int not ( int m  )
{
	return (~m) ;
}

int xor ( int m , int n )
{
	return (m ^ n) ;
}
int reminder ( int m , int n )
{
	return (m % n) ;
}

float increment ( float x  )
{
	return (x=x+1) ;
}

float decrement ( float x  )
{
	return (x=x-1) ;
}
