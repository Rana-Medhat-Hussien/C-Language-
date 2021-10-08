#include<stdio.h>
#define SET_BIT(VAR,BIT_NO)  (VAR|(1<<BIT_NO))
#define CLR_BIT(VAR,BIT_NO)  (VAR&~(1<<BIT_NO))
#define TOG_BIT(VAR,BIT_NO)  (VAR^(1<<BIT_NO))


int main(){
	int x=5;
	int bitnum=1;
    x=SET_BIT(x,bitnum);
	printf(" SET_BIT %d",x);
	x=CLR_BIT(x,bitnum);
	printf("\n CLR_BIT %d",x);
	x=TOG_BIT(x,bitnum);
	printf("\n TOG_BIT %d",x);
	

  return 0 ;	
}