#include<stdio.h>
void main()
{
	int x=5,y=6,z=7;
	int*p=&x;
	int*q=&y;
	int*r=&z;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	printf("p=%p,q=%p,r=%p\n",p,q,r);
	printf("*p=%d,*q=%d,*r=%d\n",*p,*q,*r);
	p=&z;
	q=&x;
	r=&y;
	printf("Swapping pointers\n");
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	printf("p=%p,q=%p,r=%p\n",p,q,r);
	printf("*p=%d,*q=%d,*r=%d\n",*p,*q,*r);
}
