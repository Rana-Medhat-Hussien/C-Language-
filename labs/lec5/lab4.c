#include<stdio.h>
/*Write a C code that ask the user to enter 10 values and save them in an array using a for loop.
Then ask the user to enter a value to search about, if the value existing in the 10 values, the program will print “Value Exists x times”
where x defines how many times the value exists. If the value is not exist, the program will print “Value Not Exist”. Use Linear Searching Algorithm.

*/
int main (){
	int i,count=0,num,arr[10];
	for(i=0;i<10;i++){
		printf("Enter the number %d= ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the number you search about = ");
	scanf("%d",&num);
	for (i=0;i<10;i++){
		if (arr[i]==num){
			count=count+1;
		}
	}
     if (count==0){
	 printf("value not exist");
    }
   else {
	 printf("value exists %d times",count);
	 
    }
	
return 0;
}