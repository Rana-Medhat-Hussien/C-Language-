#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int  *ptr ,Size , i,j ,Temp;
	
	printf("Please Enter the number of numbers: ");
	scanf ("%d",&Size);
	
	ptr = (int*) malloc(Size);
	
	for (i=0; i<Size; i++)
	{
		printf("Please Enter number %d: ",i+1);
		scanf ("%d",&ptr[i]);
	}
	
	for (i=0; i<Size-1;i++)
	{
		 for (j = 0; j< Size-i-1; j++) 
		{
			if(ptr[j] > ptr[j+1])
			{
				Temp = ptr[j+1];
				ptr[j+1] = ptr[j];
				ptr[j] = Temp;
			}
		}
	}
	
	printf("Values after sorting are:\n");
	for (i=0;i<Size;i++)
	{
		printf("%d\n",ptr[i]);
	}
}