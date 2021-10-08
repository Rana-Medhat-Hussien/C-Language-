#include <stdio.h>
int main(){
int x=7,y=4,z,k,m,l,n;
z=x&y;
k=x|y;
m=x^y;
l=x>>1;
n=y<<2;
printf("z=%d,k=%d,m=%d,l=%d,n=%d",z,k,m,l,n);
return 0 ;
}