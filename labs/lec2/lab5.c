#include <stdio.h>
/*Write a C code that ask the user to enter his ID and then the program will print his name. Available IDs are: 
1234-> Ahmed 
5678 -> Youssef
 1145 -> Mina
Any other number, the program will print Wrong ID 
*/
int main()
{
int ID ;
    printf("Please enter your ID= ");
    scanf("%d",&ID);

    if (ID==1234){
        printf("Welcome Ahmed");
        }

else if (ID==5678)
{
        printf("Welcome Youssef");
}
else if (ID==1145)
{

        printf("Welcome Mina");
}
else
{
    printf("Wrong ID");
}

	  return 0;
}