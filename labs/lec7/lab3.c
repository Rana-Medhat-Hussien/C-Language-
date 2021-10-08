#include<stdio.h>
typedef signed char s8 ;  // 8 indicate to 8bit 
typedef unsigned char  u8 ;
typedef signed short int  s16 ;
typedef unsigned short int u16 ;
typedef signed long int s32 ;
typedef unsigned long int u32 ;
typedef float f32 ;
typedef double f64 ;
typedef long double f128 ;



int main (){
	 printf(" size of u8 = %d bytes",sizeof(u8));
	 printf("\n size of  s8 = %d bytes",sizeof(s8));
	 printf("\n size of u16 = %d bytes",sizeof(u16));
	 printf("\n size of s16 = %d bytes",sizeof(s16));
	 printf("\n size of s32 = %d bytes",sizeof(s32));	 
	 printf("\n size of u32 = %d bytes",sizeof(u32));
	 printf("\n size of f32 = %d bytes",sizeof(f32));
	 printf("\n size of f64 = %d bytes",sizeof(f64));	
	 printf("\n size of f128 = %d bytes",sizeof(f128));		 
	 
return 0;
}