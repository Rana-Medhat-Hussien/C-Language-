# 1 "lab4.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "lab4.c"

# 1 "STD_TYPES.h" 1
typedef signed char s8 ;
typedef unsigned char u8 ;
typedef signed short int s16 ;
typedef unsigned short int u16 ;
typedef signed long int s32 ;
typedef unsigned long int u32 ;
typedef float f32 ;
typedef double f64 ;
typedef long double f128 ;
# 3 "lab4.c" 2
#pragma pack(1)
typedef struct {
 u16 x;
 u32 y;
 u16 z;
 u32 k ;
}mystruct;
int main (){
  printf("size of struct = %d bytes", sizeof(mystruct) );
 return 0;
}
