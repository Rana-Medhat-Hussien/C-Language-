/*Write a login program in C that ask the user to enter his ID and his password, if the ID is correct the system will ask the user to enter his password up to 3 times
if he enters the password right the systems welcomes him, if the three times are incorrect, the system print No more tries. If the user ID is incorrect the system print You are not registered
User
ID
Password
Ahmed
1234
7788
Amr
5678
5566
Wael
9870
1122
*/
#include <stdio.h>
int main (){
	int id,pass,i;
	printf("Please enter your ID= ");
	scanf("%d",&id);
	if (id==1234){
		printf("please enter the password= ");
		scanf("%d",&pass);
		for(i=0;i<3;i++){
			if(pass==7788){
				printf("Welcome Ahmed");
				break;
			}
			else{
			    while (i<2){
                printf("Try again   ");
				scanf("%d",&pass);
				break;
				}
				if(i==2)
            printf("incorrect password for 3 times , No more tries");
			}
	}

		}
	else if (id==5678){
		printf("please enter the password= ");
		scanf("%d",&pass);
		for(i=0;i<3;i++){
			if(pass==5566){
				printf("Welcome Amr");
				break;
			}
			else{
			    while (i<2){
                printf("Try again   ");
				scanf("%d",&pass);
				break;
				}
				if(i==2)
            printf("incorrect password for 3 times , No more tries");
			}
			}
	}
	else if (id==9870){
		printf("please enter the password= ");
		scanf("%d",&pass);
		for(i=0;i<3;i++){
			if(pass==1122){
				printf("Welcome wael");
				break;
			}
			else{
                while (i<2){
                printf("Try again   ");
				scanf("%d",&pass);
				break;
				}
				if(i==2)
            printf("incorrect password for 3 times , No more tries");
			  }
		}
	}
	else
	printf("you are not registered");

	return 0;
}
