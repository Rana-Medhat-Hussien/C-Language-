#include <stdio.h>
#include <stdlib.h>
/* Write a C code that ask the user to enter 10 values and save them in an array using a for
loop. Then print the values entered by the user in reverse order using another for loop.
*/

int main()
{
    int arr[10], i , j;
    for (i=0;i<10;i++){
        printf("please enter number %d = ",i);
        scanf("%d",&arr[i]);
    }
    for(j=9;j>=0;j--){
        printf("\n %d",arr[j]);
    }

    return 0;
}
