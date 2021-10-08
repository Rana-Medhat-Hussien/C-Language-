#include <stdio.h>
#include "STD_TYPES.h"
#pragma pack(1) //(size =12 byte) (without pragma size=16 byte)
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


