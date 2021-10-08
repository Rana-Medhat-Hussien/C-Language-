#include <stdio.h>
#include <stdlib.h>
/*Write C code that calculates the factorial of a number entered by the user using recursive function*/
int fact (int n);
int main()
{
    int num, result;
    printf("Enter the number= ");
    scanf("%d",&num);
    result=fact(num);
    printf("%d",result);
    return 0;
}
int fact (int n)
{
    int x ;
    /* return (5*fact(4));                                                             //return(5*4*3*2*1*1*1)
       return (5* return (4*fact(3)));                                                 //return(4*3*2*1*1*1)
       return (5* return (4*return (3*fact(2))));                                     //return(3*2*1*1*1)
       return (5* return (4*return (3*return (2*fact(1));)))                          //return (2*1*1)
       return (5* return (4*return (3*return (2*return (1*fact(0))));)))              // return(1*1)
      then go to else and return 1 so
      fact(0)=1
    */
    if (n>=1)
    {
     x=(n* fact(n-1));
    }
    else
    {
       x= 1;
    }
    return x;
}
