#include <stdio.h>
#include <stdlib.h>
/*Write a C code that ask the user to enter 10 values and save them in an array using a for loop.
Then print the summation and the average of the values entered.
*/

int main()
{
    int i,arr[10],sum=0;
    float avr;
    for (i=0;i<10;i++){
        printf("Please enter the number %d= ",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avr=sum/10.0;
    printf("Sum of array elements is %d",sum);
    printf("\n average of array elements is %f",avr);



    return 0;
}
