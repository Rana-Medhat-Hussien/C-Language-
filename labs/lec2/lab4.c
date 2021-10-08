#include <stdio.h>
/*Write a C code to ask the user to enter his grade and the program will print his rating. 
 
0   <= grade < 50 
  ------> Failed 50 <= grade < 65   
------> Normal 65 <= grade < 75   ------>
Good 75 <= grade < 85   ------> 
Very Good 85 <= grade           
 ------> Excellent */
int main (){
	int grade ;
	printf("Please enter your grade=");
	scanf("%d",&grade);
	if (grade>100||grade<0){
		printf("Please enter the correct grade between 0 and 100 =");
		scanf("%d",&grade);
	}
	
	if (grade>=85){
		printf("Excellent");
	}
	else if (grade>=75&&grade<=85){
		printf("very good");
	}
	else if (grade>=65&&grade<=75){
		printf("good");
	}
	else if (grade>=50&&grade<=65){
		printf("normal");
	}
	else{
	   printf("fail");	
	}

	return 0;	
}