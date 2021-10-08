/*Write a C code that ask the user to enter his ID, if the ID is valid it will ask the user to enter his password, if the password is correct the program will print the user name,
if the password is incorrect the program will print Incorrect Password. In case of not existing ID, the program will print Incorrect ID */

#include <stdio.h>
int main (){
	int ID=135,password=155;
	printf("Please enter your ID = ");
	scanf("%d",&ID);
	if (ID==135){
		printf("please Enter your password=");
		scanf("%d",& password);
		if (password==155)
			printf("Welcome Rana");
		else
			printf("Incorrect password");
	}
	else
		printf("Incorrect ID");
	return 0;	
}