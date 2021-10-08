#include<stdio.h>
/*Write a C code to manage a class of 4 students. Each student studies 4 subjects Math, Language, Physics and Chemistry.
First define an array of 10 elements and assign random grades for students. The system will ask the user to enter the student ID
then the system will show its grades. The software shall manage wrong IDs.*/
typedef struct{
	int MathGrade;
	int LanguageGrade;
	int PhysicsGrade;
	int ChemistryGrade;
}s;

int main (){
	int id ;
	s arr[4]={{55,80,90,65},{90,95,88,99},{55,80,98,99},{70,50,90,99}};
	
	printf("Enter the student ID from 0 to 3 = ");
	scanf("%d",&id);
	
	if(id<0||id>4){
		printf("student ID not correct ");
	}
	else {
		printf("MathGrade = %d ",arr[id].MathGrade);
		printf("LanguageGrade = %d ", arr[id].LanguageGrade);
		printf("PhysicsGrade = %d ", arr[id].PhysicsGrade);
		printf("ChemistryGrade = %d ",arr[id].ChemistryGrade);
	}
   
return 0;
}